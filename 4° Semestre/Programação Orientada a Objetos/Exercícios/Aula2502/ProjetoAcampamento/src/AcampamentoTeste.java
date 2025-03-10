public class AcampamentoTeste {
	public static void main(String[] args) {
		Acampamento membro = new Acampamento();
		membro.nome = "João";
		membro.idade = 15;
		membro.imprimir();

		membro.separarGrupo();

		membro.imprimir();
	}
}
