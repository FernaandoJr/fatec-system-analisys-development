public class Pessoa {
	private int id;
	private String nome;
	private String curso;

	public Pessoa(int id, String nome, String curso) {
		this.id = id;
		this.nome = nome;
		this.curso = curso;
	}

	// Getters
	public int getId() {
		return id;
	}

	public String getNome() {
		return nome;
	}

	public String getCurso() {
		return curso;
	}

	// Setters
	public void setId(int id) {
		this.id = id;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setCurso(String curso) {
		this.curso = curso;
	}

	@Override
	public int hashCode() {
		return nome.length();
	}

	@Override
	public boolean equals(Object obj) {
		if (obj == null || getClass() != obj.getClass())
			return false;
		Pessoa other = (Pessoa) obj;
		return id == other.id;
	}
}