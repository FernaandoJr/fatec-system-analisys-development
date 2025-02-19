public class ClienteTeste {
	public static void main(String[] args) {
		Cliente.taxaDeCredito = 0.18;
		
		Cliente cliente = new Cliente();
		cliente.codigo = 1;
		cliente.nome = "Fulano";
		cliente.limiteCredito = 1000.0;
		cliente.imprimirDados();

		System.out.println("");

		Cliente outro = new Cliente();
		outro.codigo = 2;
		outro.nome = "Ciclano";
		outro.limiteCredito = 2000.0;
		outro.imprimirDados();

		outro = cliente;

		outro.imprimirDados();
		cliente.imprimirDados();
	}
}
