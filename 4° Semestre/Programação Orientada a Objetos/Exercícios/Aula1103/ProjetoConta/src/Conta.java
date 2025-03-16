public class Conta {

	// 1. Atributos (encapsulados)
	private String conta;
	private String agencia;
	private double saldo;
	private String nomeCliente;

	// Getters and Setters
	public void setConta(String conta){
		this.conta = conta;
	}
	public String getConta(){
		return conta;
	}
	public void setAgencia(String agencia){
		this.agencia = agencia;
	}
	public String getAgencia(){
		return agencia;
	}
	public void setSaldo(double saldo){
		this.saldo = saldo;
	}
	public double getSaldo(){
		return saldo;
	}
	public void setNomeCliente(String nomeCliente){
		this.nomeCliente = nomeCliente;
	}
	public String getNomeCliente(){
		return nomeCliente;
	}

	public int sacar(double valor){
		if(valor <= saldo){
			saldo -= valor;
			return 1;
		}
		return 0;
	}
	public void depositar(double valor){
		saldo += valor;
	}
	public void imprimir(){
		System.out.println("Dados da conta:");
		System.out.println("Numero da conta: "+ conta);
		System.out.println("Agencia: "+ agencia);
		System.out.println("Nome do cliente: "+ nomeCliente);
		System.out.println("Saldo: "+ saldo);
	}
}
