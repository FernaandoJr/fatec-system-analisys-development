public class Fabrica {
	public static void main(String[] args) {
		Carro carro1 = new Carro("ka", "gol", "wolksvagen");
		Carro carro2 = new Carro("ka", "gol", "wolksvagen");
		Carro carro3 = new Carro("ka", "gol", "wolksvagen");
		Carro carro4 = new Carro("ka", "gol", "wolksvagen");
		Carro carro5 = new Carro("ka", "gol", "wolksvagen");

		System.out.println("Quantidade de carros produzidos: " + Carro.quantidadeProduzida
		);
	}
}

/*
 * Esse atributo publico é manipulado através do constructor que tem dentro da classe Carro, isso faz com que a cada criação de uma nova instância é somado uma unidade a mais no contador que pode ser acessado publicamente. Enquanto que os outros atributos são privados deixando-os apenas para o escopo daquele que o acessa. Fiz essa abordagem porque é a maneira mais eficaz, simples e lógica de se fazer, onde cada nova instância já é computado no atributo global a sua quantidade. 
 */