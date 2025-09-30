class DisplayManager {
	constructor() {
		this.elementos = this.obterElementos()
		this.configurarAnimacoes()
	}

	obterElementos() {
		return {
			resultado: document.getElementById("resultado"),
			operacaoAtual: document.getElementById("operacaoAtual"),
			calculadora: document.querySelector(".calculadora"),
			botaoOnOff: document.querySelector(".btn-on-off"),
			display: document.querySelector(".display"),
		}
	}

	configurarAnimacoes() {
		this.elementos.display.style.transition = "all 0.3s ease"
	}

	atualizarDisplay(state) {
		const { resultado, operacaoAtual } = this.elementos
		const { ligada, expressao, resultado: res } = state

		if (!ligada) {
			resultado.textContent = ""
			operacaoAtual.textContent = ""
			return
		}

		const expressaoDisplay =
			expressao + (res !== "0" && expressao ? res : "")
		operacaoAtual.textContent = Utils.limitarTexto(expressaoDisplay)
		resultado.textContent = Utils.limitarTexto(res)
	}

	mostrarErro(callback) {
		const { display } = this.elementos
		display.classList.add("erro")

		setTimeout(() => {
			display.classList.remove("erro")
			if (callback) callback()
		}, CONSTANTES.TEMPO_ERRO)
	}

	toggleCalculadora(ligada) {
		const { calculadora, botaoOnOff } = this.elementos

		calculadora.classList.toggle("desligada", !ligada)

		if (ligada) {
			this.configurarBotaoOnOff(
				botaoOnOff,
				"ON/OFF",
				"hsl(var(--secondary))"
			)
		} else {
			this.configurarBotaoOnOff(
				botaoOnOff,
				"LIGAR",
				"hsl(var(--destructive))",
				"hsl(var(--destructive-foreground))"
			)
		}
	}

	configurarBotaoOnOff(botao, texto, background, color = "") {
		Object.assign(botao, { textContent: texto })
		Object.assign(botao.style, { background, color })
	}

	adicionarFeedbackBotao(elemento) {
		elemento.style.transform = "scale(0.95)"
		setTimeout(() => {
			elemento.style.transform = "scale(1)"
		}, 100)
	}

	destacarOperacao(ativo) {
		const { operacaoAtual } = this.elementos
		operacaoAtual.classList.toggle("destacado", ativo)
	}
}

window.DisplayManager = DisplayManager
