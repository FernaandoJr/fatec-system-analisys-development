class Calculator {
	constructor() {
		this.state = {
			expressao: "",
			resultado: "0",
			ultimoResultado: "",
			ligada: true,
		}

		this.display = new DisplayManager()
		this.inicializar()
	}

	inicializar() {
		this.display.atualizarDisplay(this.state)
		this.configurarEventos()
	}

	configurarEventos() {
		window.addEventListener("historicoUsado", (event) => {
			const { resultado } = event.detail
			this.state.resultado = resultado
			this.display.atualizarDisplay(this.state)
		})
	}

	resetarEstado() {
		Object.assign(this.state, {
			expressao: "",
			resultado: "0",
			ultimoResultado: "",
		})
	}

	adicionarNumero(numero) {
		if (!this.state.ligada) return

		const { ultimoResultado, expressao, resultado } = this.state

		if (ultimoResultado && !expressao) {
			this.state.resultado = numero
			this.state.ultimoResultado = ""
		} else if (resultado === "0" || resultado === "Erro") {
			this.state.resultado = numero
		} else if (resultado.length < CONSTANTES.MAX_DIGITOS) {
			this.state.resultado += numero
		}

		this.display.atualizarDisplay(this.state)
	}

	adicionarOperador(operador) {
		if (!this.state.ligada) return

		const { ultimoResultado, expressao, resultado } = this.state

		if (ultimoResultado && !expressao) {
			this.state.expressao = `${ultimoResultado} ${operador} `
			this.state.resultado = "0"
			this.state.ultimoResultado = ""
		} else if (resultado !== "0") {
			this.state.expressao += `${resultado} ${operador} `
			this.state.resultado = "0"
		} else if (expressao && !expressao.endsWith(" ")) {
			this.substituirUltimoOperador(operador)
		}

		this.display.atualizarDisplay(this.state)
		this.display.destacarOperacao(true)
	}

	substituirUltimoOperador(novoOperador) {
		const trimmed = this.state.expressao.trim()
		const ultimoChar = Utils.ultimoChar(trimmed)

		if (Utils.isOperador(ultimoChar)) {
			this.state.expressao = `${trimmed.slice(0, -1)}${novoOperador} `
		} else {
			this.state.expressao += ` ${novoOperador} `
		}
	}

	adicionarDecimal() {
		if (!this.state.ligada || this.state.resultado.includes(",")) return

		this.state.resultado += ","
		this.display.atualizarDisplay(this.state)
	}

	calcular() {
		if (!this.state.ligada) return

		const expressaoCompleta =
			this.state.expressao +
			(this.state.resultado !== "0" ? this.state.resultado : "")

		if (!expressaoCompleta.trim()) return

		try {
			const resultado = Utils.avaliarExpressao(expressaoCompleta)

			if (!Utils.isNumeroValido(resultado)) {
				this.mostrarErro()
				return
			}

			this.processarResultado(expressaoCompleta, resultado)
		} catch (error) {
			this.mostrarErro()
		}
	}

	processarResultado(expressao, resultado) {
		const resultadoFormatado = Utils.formatarNumero(resultado)

		window.dispatchEvent(
			new CustomEvent("novaOperacao", {
				detail: { operacao: `${expressao} = ${resultadoFormatado}` },
			})
		)

		this.state.ultimoResultado = resultadoFormatado
		this.state.resultado = resultadoFormatado
		this.state.expressao = ""

		this.display.atualizarDisplay(this.state)
		this.display.destacarOperacao(false)
	}

	operacaoEspecial(tipo) {
		if (!this.state.ligada) return

		const numero = parseFloat(this.state.resultado.replace(",", "."))
		let resultado, operacao

		switch (tipo) {
			case "raiz":
				if (numero < 0) return this.mostrarErro()
				resultado = Math.sqrt(numero)
				operacao = `√${this.state.resultado} = ${Utils.formatarNumero(
					resultado
				)}`
				break
			case "porcentagem":
				resultado = numero / 100
				operacao = `${this.state.resultado}% = ${Utils.formatarNumero(
					resultado
				)}`
				break
			default:
				return
		}

		window.dispatchEvent(
			new CustomEvent("novaOperacao", {
				detail: { operacao },
			})
		)

		this.state.resultado = Utils.formatarNumero(resultado)
		this.display.atualizarDisplay(this.state)
	}

	adicionarParenteses(tipo) {
		if (!this.state.ligada) return
		this.state.resultado += tipo === "abrir" ? "(" : ")"
		this.display.atualizarDisplay(this.state)
	}

	ligarDesligar() {
		this.state.ligada = !this.state.ligada

		if (this.state.ligada) {
			this.resetarEstado()
		}

		this.display.toggleCalculadora(this.state.ligada)
		this.display.atualizarDisplay(this.state)
	}

	mostrarErro() {
		this.state.resultado = "Erro"
		this.display.mostrarErro(() => {
			this.resetarEstado()
			this.display.atualizarDisplay(this.state)
		})
		this.display.atualizarDisplay(this.state)
	}
}

window.Calculator = Calculator

let calc = null

if (document.readyState === "loading") {
	document.addEventListener("DOMContentLoaded", inicializarApp)
} else {
	inicializarApp()
}

function inicializarApp() {
	calc = new Calculator()
	window.calc = calc
	console.log("🧮 Calculadora inicializada com sucesso!")
}

window.adicionarNumero = (n) => calc?.adicionarNumero(n)
window.adicionarOperador = (op) => calc?.adicionarOperador(op)
window.adicionarDecimal = () => calc?.adicionarDecimal()
window.calcular = () => calc?.calcular()
window.raizQuadrada = () => calc?.operacaoEspecial("raiz")
window.exponencial = () => calc?.adicionarOperador("^")
window.porcentagem = () => calc?.operacaoEspecial("porcentagem")
window.abrirParenteses = () => calc?.adicionarParenteses("abrir")
window.fecharParenteses = () => calc?.adicionarParenteses("fechar")
window.limparTudo = () => {
	calc?.resetarEstado()
	calc?.display.atualizarDisplay(calc.state)
}
window.ligarDesligar = () => calc?.ligarDesligar()
