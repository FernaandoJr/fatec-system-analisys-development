public class Conversor {

	public static double converterCelsiusParaFahrenheit(double celsius){
		return (celsius * 1.8) + 32;
	}

	public void exibirConversao(double celsius){
		
		System.out.println("Resultado: " + converterCelsiusParaFahrenheit(celsius));
	}


	public static void main(String[] args) {
		Conversor conversor1 = new Conversor();

		conversor1.exibirConversao(10);
	}
}


/*
 * O método exibirConversao tem seu papel de mostrar o resutado do outro método estático enquanto que o converterCelsiusParaFahrenheit está no escopo global da classe. O converterCelsiusParaFahrenheit pode ser usado mesmo que um objeto novo seja instânciado porque ele faz parte da classe e não de uma instância em si e pode ser usado fora e dentro de uma, enquanto que no outro é preciso ter um objeto instânciado para que ele possa ser chamado. 
 */