package model;

public class Gerente extends Funcionario {
	private String login;
	private String senha;

	// Getters and Setters
	public String getLogin() {
		return login;
	}

	public void setLogin(String login) {
		this.login = login;
	}

	public String getSenha() {
		return senha;
	}

	public void setSenha(String senha) {
		this.senha = senha;
	}

	public Gerente(int idFunc, String nome, String email, String documento, String login, String senha) {
		super(idFunc, nome, email, documento);
		this.login = login;
		this.senha = senha;
	}

}
