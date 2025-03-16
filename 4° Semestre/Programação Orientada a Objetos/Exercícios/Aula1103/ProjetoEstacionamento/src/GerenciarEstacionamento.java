public class GerenciarEstacionamento {
	public static void main(String[] args) {

		Cliente cliente1;
		Carro carro1, carro2;

		cliente1 = new Cliente();
		cliente1.setCodigo(1);
		cliente1.setNomeCliente("Joao");
		cliente1.setEmail("fernando@gmail.com");

		carro1 = new Carro();
		carro1.setPlaca("ABC-1234");
		carro1.setModelo("Gol");
		carro1.setMarca("Volkswagen");
		carro1.setAno(2010);

		carro2 = new Carro();
		carro2.setPlaca("DEF-5678");
		carro2.setModelo("Uno");
		carro2.setMarca("Fiat");
		carro2.setAno(2015);

		cliente1.imprimir();

		cliente1.adicionarCarro(carro1);
		cliente1.adicionarCarro(carro2);
		cliente1.imprimir();


	}
}
