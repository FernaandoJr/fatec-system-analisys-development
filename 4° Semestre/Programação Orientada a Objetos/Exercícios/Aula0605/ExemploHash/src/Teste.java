public class Teste {

	public static void main(String[] args) {
		Pessoa pessoa1 = new Pessoa(1, "ana", "ads");
		Pessoa pessoa2 = new Pessoa(2, "fernando", "ads");
		Pessoa pessoa3 = new Pessoa(3, "luis", "mecanica");
		Pessoa pessoa4 = new Pessoa(1, "maria", "mecanica");

		System.out.println(pessoa2.hashCode());
		System.out.println(pessoa1.equals(pessoa4));

	}
}
