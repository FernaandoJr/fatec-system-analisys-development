public class Produto {
	private String nome;
	private double preco;


	public Produto(String nome, double preco){
		this.nome = nome;
		this.preco = preco;
	}

	//GETTERS E SETTERS
	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public double getPreco() {
		return preco;
	}
	
	public void setPreco(double preco) {
		if(preco < 0){
			System.out.println("preco invalido! tente novamente");
		}
		this.preco = preco;
	}

	public void imprimirDados(){
		System.out.println("Produto");
		System.out.println("Nome: " + nome);
		System.out.println("Preco: " + preco);
	}


	public static void main(String[] args) {
		Produto prod1 = new Produto("produto1", 10);
		Produto prod2 = new Produto("produto1", 10);

		prod1.imprimirDados();

		prod1.setNome("novo nome");
		prod1.imprimirDados();

		prod1.setPreco(-10);

		prod1.imprimirDados();


	}
}


/*
 * a) o código acima traz riscos porque os atributos que estão sendo criados são publicos e por isso poderão ser modificados a qualquer momento sem nenhuma restrição, podendo mexer nos atributos de outras instâncias;
 * c) fiz uma verificação onde antes de atribuir o valor avalio se ele é menor que zero e digo uma mensagem falando "preço inválido", isso previne de colocar números negativos, essa abordagem faz com que não seja possível colocar um item com preço negativo (de graça).
 */

