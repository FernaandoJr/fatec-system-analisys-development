public class Aluno {
	private String nome;
	private String curso;

	public Aluno(String nome, String curso){
		this.nome = nome;
		this.curso = curso;
	} 

	private void imprimirDados(){
		System.out.println("Nome do aluno: " + nome);
		System.out.println("curso: " + curso);
	}




	public static void main(String[] args) {
		Aluno aluno1 = new Aluno("fernado", "ADS");

		aluno1.imprimirDados();
	}
}

/*
 * O erro é causado porque o método de imprimir os dados está como estático e não é possivel usar um método que precisa de inicialização. Por isso o método não pode ser estático ele só pode ser acessado dentro do escopo do objeto (inicializado), onde é necessário um contexto antes de chamar um objeto, afinal não da pra imprimir algo que não tem nenhuma referência.
 */