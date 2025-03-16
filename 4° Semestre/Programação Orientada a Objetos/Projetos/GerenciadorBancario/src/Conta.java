public class Conta {
	private int numero;
	private String agencia;
	private String nomeCliente;
	private double saldo;
	private double limite;
	
	public int getNumero() {
		return numero;
	}

	public void setNumero(int numero) {
		this.numero = numero;
	}

	public String getAgencia() {
		return agencia;
	}

	public void setAgencia(String agencia) {
		this.agencia = agencia;
	}

	public String getNomeCliente() {
		return nomeCliente;
	}

	public void setNomeCliente(String nomeCliente) {
		this.nomeCliente = nomeCliente;
	}

	public double getSaldo() {
		return saldo;
	}

	public void setSaldo(double saldo) {
		this.saldo = saldo;
	}

	public double getLimite() {
		return limite;
	}

	public void setLimite(double limite) {
		this.limite = limite;
	}

	// MÉTODOS
	public boolean sacar(double valor){
		if(valor <= this.saldo || valor <= this.limite){
			this.saldo -= valor;
			return true;
		}
		return false;
	}

	public boolean depositar(double valor){
		if(valor > 0){
			this.saldo += valor;
			return true;
		}
		return false;
	}




	public void imprimirDados(){
		System.out.println("===========");
		System.out.println("Dados da conta:");
		System.out.println("Número: " + this.numero);
		System.out.println("Agência: " + this.agencia);
		System.out.println("Nome do Cliente: " + this.nomeCliente);
		System.out.println("Saldo: " + this.saldo);
		System.out.println("Limite: " + this.limite);
		System.out.println("===========");
	}
}
