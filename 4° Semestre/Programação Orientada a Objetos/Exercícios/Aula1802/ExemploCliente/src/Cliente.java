public class Cliente {
	// Atributos
	public int codigo;
	public String nome;
	public double limiteCredito;
	public static double taxaDeCredito = 0.10;

	// Métodos
	public void imprimirDados() {
		System.out.println("Dados do Cliente");
		System.out.println("Código: " + codigo);
		System.out.println("Nome: " + nome);
		System.out.println("Limite de Crédito: " + limiteCredito);
		System.out.println("Taxa de Crédito: " + taxaDeCredito);
	}
}
