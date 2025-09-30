class Utils {
	static formatarNumero(numero) {
		if (isNaN(numero)) return "Erro"

		if (numero % 1 !== 0) {
			numero = parseFloat(numero.toFixed(8))
		}

		return numero.toString().replace(".", ",")
	}

	static avaliarExpressao(expressao) {
		return new Function(
			"return " +
				expressao
					.replace(/,/g, ".")
					.replace(/×/g, "*")
					.replace(/÷/g, "/")
					.replace(/−/g, "-")
					.replace(/\^/g, "**")
		)()
	}

	static isNumeroValido(numero) {
		return isFinite(numero) && !isNaN(numero)
	}

	static limitarTexto(texto, limite = 20) {
		return texto.length > limite ? texto.slice(0, limite) + "..." : texto
	}

	static debounce(func, delay) {
		let timeoutId
		return (...args) => {
			clearTimeout(timeoutId)
			timeoutId = setTimeout(() => func.apply(null, args), delay)
		}
	}

	static isOperador(char) {
		return ["+", "-", "*", "/", "^", "×", "÷", "−"].includes(char)
	}

	static ultimoChar(str) {
		return str.trim().slice(-1)
	}
}

const CONSTANTES = {
	MAX_HISTORICO: 50,
	MAX_DIGITOS: 15,
	TEMPO_ERRO: 2000,
	OPERADORES: {
		VISUAL: ["×", "÷", "−", "^"],
		JS: ["*", "/", "-", "**"],
	},
}

window.Utils = Utils
window.CONSTANTES = CONSTANTES
