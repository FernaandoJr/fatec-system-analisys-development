public class Empresa {
	public static void main(String[] args) {
		Funcionario funcionario = new Funcionario("Joao", 12345, 5000.00);
		funcionario.calcularSalarioLiquido();
		System.out.println("Nome: " + funcionario.getNome());
		System.out.println("Matrícula: " + funcionario.getMatricula());
		System.out.println("Salário: " + funcionario.getSalario());
	
		System.out.println("Salário Líquido: " + funcionario.calcularSalarioLiquido());
	
	}
	
}

/*
 * O atributos são nada mais que os valores/variáveis atrelados daquele objeto e os métodos são funções que podem ser realizadas para cada objeto separadamente, como por exemplo Calcular o salário liquído, onde só será calculado o salário daquele que o chamou. O Sistema deve instanciar objetos atribuindo uma variável e usando o "= New Funcionário", após isso teremos um objeto que podemos chamar de funcionário e que terá seus próprios atributos e métodos. Então é possível criar outros objetos seguindo a mesma lógica com nomes diferentes;  
 */