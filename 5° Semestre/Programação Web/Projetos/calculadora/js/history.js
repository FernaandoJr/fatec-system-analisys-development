class HistoryManager {
	constructor() {
		this.elementos = this.obterElementos()
		this.historico = this.carregarHistorico()
	}

	obterElementos() {
		return {
			modalHistorico: document.getElementById("modalHistorico"),
			historicoContent: document.getElementById("historicoContent"),
			historicoVazio: document.getElementById("historicoVazio"),
		}
	}

	adicionar(operacao) {
		this.historico.unshift(operacao)

		if (this.historico.length > CONSTANTES.MAX_HISTORICO) {
			this.historico = this.historico.slice(0, CONSTANTES.MAX_HISTORICO)
		}

		this.salvar()
		this.atualizar()
	}

	atualizar() {
		const { historicoContent, historicoVazio } = this.elementos
		const temHistorico = this.historico.length > 0

		historicoVazio.classList.toggle("show", !temHistorico)

		this.limparItens()

		if (temHistorico) {
			this.historico.forEach((operacao) => {
				const item = this.criarItem(operacao)
				historicoContent.appendChild(item)
			})
		}
	}

	limparItens() {
		const itens =
			this.elementos.historicoContent.querySelectorAll(".historico-item")
		itens.forEach((item) => item.remove())
	}

	criarItem(operacao) {
		const item = document.createElement("div")
		item.className = "historico-item"
		item.textContent = operacao
		item.onclick = () => this.usarOperacao(operacao)

		item.style.opacity = "0"
		item.style.transform = "translateY(-10px)"

		setTimeout(() => {
			item.style.transition = "all 0.3s ease"
			item.style.opacity = "1"
			item.style.transform = "translateY(0)"
		}, 50)

		return item
	}

	usarOperacao(operacao) {
		const partes = operacao.split(" = ")
		if (partes.length === 2) {
			window.dispatchEvent(
				new CustomEvent("historicoUsado", {
					detail: { resultado: partes[1], operacao },
				})
			)
		}
		this.fechar()
	}

	limpar() {
		this.historico = []
		this.salvar()
		this.atualizar()
	}

	toggle(abrir) {
		const { modalHistorico } = this.elementos
		modalHistorico.classList.toggle("active", abrir)
		document.body.style.overflow = abrir ? "hidden" : "auto"

		if (abrir) {
			this.atualizar()
		}
	}

	abrir() {
		this.toggle(true)
	}
	fechar() {
		this.toggle(false)
	}

	salvar() {
		try {
			localStorage.setItem(
				"calculadora_historico",
				JSON.stringify(this.historico)
			)
		} catch (e) {
			console.warn("Erro ao salvar histórico:", e)
		}
	}

	carregarHistorico() {
		try {
			const dados = localStorage.getItem("calculadora_historico")
			return dados ? JSON.parse(dados) : []
		} catch (e) {
			console.warn("Erro ao carregar histórico:", e)
			return []
		}
	}

	exportar() {
		const dados = {
			timestamp: new Date().toISOString(),
			historico: this.historico,
		}

		const blob = new Blob([JSON.stringify(dados, null, 2)], {
			type: "application/json",
		})

		const url = URL.createObjectURL(blob)
		const a = document.createElement("a")
		a.href = url
		a.download = `calculadora-historico-${Date.now()}.json`
		a.click()
		URL.revokeObjectURL(url)
	}

	obterEstatisticas() {
		return {
			total: this.historico.length,
			operacoes: this.historico.filter((op) => op.includes("=")).length,
			ultimaOperacao: this.historico[0] || null,
		}
	}
}

window.HistoryManager = HistoryManager

let history = null

if (document.readyState === "loading") {
	document.addEventListener("DOMContentLoaded", inicializarHistorico)
} else {
	inicializarHistorico()
}

function inicializarHistorico() {
	history = new HistoryManager()
	window.history = history

	window.addEventListener("novaOperacao", (event) => {
		history.adicionar(event.detail.operacao)
	})

	const modal = document.getElementById("modalHistorico")
	modal?.addEventListener("click", (event) => {
		if (event.target === modal) {
			history.fechar()
		}
	})
}

window.abrirHistorico = () => history?.abrir()
window.fecharHistorico = () => history?.fechar()
window.limparHistorico = () => history?.limpar()
