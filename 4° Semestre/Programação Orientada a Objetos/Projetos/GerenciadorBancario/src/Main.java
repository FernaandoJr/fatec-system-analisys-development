import java.util.ArrayList;
import java.util.Iterator;
import java.util.Scanner;

//NOME: FERNANDO DIVINO DE MORAES JUNIOR

public class Main {
	private static ArrayList<Conta> contas = new ArrayList<>();

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int opcao = 0;

		do {
			System.out.println("------ MENU ------");
			System.out.println("1 - Cadastrar Conta");
			System.out.println("2 - Consultar Dados de uma conta");
			System.out.println("3 - Exibir todas as contas");
			System.out.println("4 - Depositar");
			System.out.println("5 - Sacar");
			System.out.println("6 - Excluir conta");
			System.out.println("0 - Sair");
			System.out.print("Digite a opçao desejada: ");
			opcao = Integer.parseInt(input.nextLine());

			switch (opcao) {
				case 1:
					System.out.println("Cadastrar Conta...");
					execCadastro();
					break;
				case 2:
					System.out.println("Consultar Dados de uma conta");
					execConsulta();
					break;
				case 3:
					System.out.println("Exibir todas as contas");
					execConsultaTudo();
					break;
				case 4:
					System.out.println("Depositar");
					execDeposito();
					break;
				case 5:
					System.out.println("Sacar");
					execSacar();
					break;
				case 6:
					System.out.println("Excluir conta");
					execExcluir();
					break;
				case 0:
					System.out.println("Saindo...");
					break;
				default:
					System.out.println("Opcao invalida!");
					break;
			}
		} while (opcao != 0);
	}


	public static void execCadastro(){
		Scanner input = new Scanner(System.in);
		Conta conta = new Conta();

        System.out.print("Digite o numero da conta: ");
        int numeroConta = Integer.parseInt(input.nextLine());
        for (Conta c : contas) {
            if (c.getNumero() == numeroConta) {
                System.out.println("Numero ja cadastrado! Tente novamente.");
                return;
            }
        }
        conta.setNumero(numeroConta);

		System.out.print("Digite a agencia: ");
		conta.setAgencia(input.nextLine());

		System.out.print("Digite o nome do cliente: ");
		conta.setNomeCliente(input.nextLine());

		contas.add(conta);
	}


	public static void execConsulta(){
		Scanner input = new Scanner(System.in);
		int numero = 0;

		System.out.println("Digite o numero da conta: ");
		numero = Integer.parseInt(input.nextLine());

		for (Conta c : contas){
			if(c.getNumero() == numero){
				c.imprimirDados();
				return;
			}
		}
	}

	public static void execConsultaTudo(){
		Scanner input = new Scanner(System.in);
		for (Conta c : contas){
				c.imprimirDados();
			}
	}

	public static void execDeposito(){
		Scanner input = new Scanner(System.in);
		int numero = 0;
		double valor = 0;

		System.out.println("Digite o numero da conta: ");
		numero = Integer.parseInt(input.nextLine());

		for (Conta c : contas){
			if(c.getNumero() == numero){
				System.out.println("Digite o valor do deposito: ");
				valor = Double.parseDouble(input.nextLine());
				if(c.depositar(valor)){
					System.out.println("Deposito efetuado com sucesso!");
				} else{
					System.out.println("Valor invalido! Tente novamente.");
				}
				return;
			}
		}

	}

	public static void execSacar(){
		Scanner input = new Scanner(System.in);
		int numero = 0;
		double valor = 0;

		System.out.println("Digite o numero da conta: ");
		numero = Integer.parseInt(input.nextLine());

		for(Conta c : contas){
			if(c.getNumero() == numero){
				System.out.println("Digite o valor a ser sacado: ");
				valor = Double.parseDouble(input.nextLine());

				if(c.sacar(valor)){
					System.out.println("Valor sacado com sucesso!");
				} else{
					System.out.println("Saldo insuficiente ou valor invalido! Tente novamente.");
				}
			}
		}
	}

	public static void execExcluir(){
        Scanner input = new Scanner(System.in);
        int numero = 0;

        System.out.println("Digite o numero da conta que deseja excluir: ");
        numero = Integer.parseInt(input.nextLine());

        Iterator<Conta> iterator = contas.iterator();
        while (iterator.hasNext()) {
            Conta c = iterator.next();
            if (c.getNumero() == numero) {
                iterator.remove();
                System.out.println("Conta removida com sucesso!");
                return;
            }
        }
        System.out.println("Conta não encontrada!");
    }
}
