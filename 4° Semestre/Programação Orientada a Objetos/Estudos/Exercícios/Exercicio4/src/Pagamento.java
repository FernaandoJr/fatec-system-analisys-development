public class Pagamento {
	

	public int pagar(int valor) {
		return valor;
	}

	public int pagar(int valor, int codigo_cartao) {
		return valor;
	}

	public int pagar(int valor, int codigo_cartao, int numero_parcelas) {
		return valor;
	}



	public static void main(String[] args) {
		Pagamento pagamento1 = new Pagamento();


		pagamento1.pagar(1, 123123, 123);
	}
}


/*
 * A vantagem de sobrecarga de métodos é que onde se tem métodos que são totalmente diferentes em sua essência mas fazem a mesma coisa é possivel fazer métodos com o mesmo nome mas mudando apenas os parâmetros, isso faz com que possa ser divido em diferentes lógicas aquilo com o mesmo objetivo final de realizar um pagamento, mantendo um método limpo sem lixo de outros tipos de métodos atrapalhando.
 */