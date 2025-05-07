package model;

import java.util.Objects;

public class Livro {
	private int isbn;
	private String titulo;
	private int anoPublicacao;
	private int quantidade;

	// Construtor
	public Livro(int isbn, String titulo, int anoPublicacao, int quantidade) {
		this.isbn = isbn;
		this.titulo = titulo;
		this.anoPublicacao = anoPublicacao;
		this.quantidade = quantidade;
	}

	// construtor vazio
	public Livro() {

	}

	public int getIsbn() {
		return isbn;
	}

	public void setIsbn(int isbn) {
		this.isbn = isbn;
	}

	public String getTitulo() {
		return titulo;
	}

	public void setTitulo(String titulo) {
		this.titulo = titulo;
	}

	public int getAnoPublicacao() {
		return anoPublicacao;
	}

	public void setAnoPublicacao(int anoPublicacao) {
		this.anoPublicacao = anoPublicacao;
	}

	public int getQuantidade() {
		return quantidade;
	}

	public void setQuantidade(int quantidade) {
		this.quantidade = quantidade;
	}

	@Override
	public boolean equals(Object obj) {
		if (obj == null || getClass() != obj.getClass())
			return false;
		Livro livro = (Livro) obj;
		return isbn == livro.getIsbn();
	}

	@Override
	public int hashCode() {
		return Objects.hashCode(isbn);
	}

	@Override
	public String toString() {
		return "Livro {" +
				"\n  ISBN: " + isbn +
				",\n  Título: '" + titulo + '\'' +
				",\n  Ano de Publicação: " + anoPublicacao +
				",\n  Quantidade: " + quantidade +
				"\n}";
	}

}
