public class Carro {
    private String placa;
    private String modelo;
    private String marca;
    private int ano;

    // Getter and Setter for placa
    public String getPlaca() {
        return placa;
    }

    public void setPlaca(String placa) {
        this.placa = placa;
    }

    // Getter and Setter for modelo
    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    // Getter and Setter for marca
    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    // Getter and Setter for ano
    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

	public void imprimir() {
		System.out.println("Dados do carro: ");
		System.out.println("Placa: " + this.placa);
		System.out.println("Modelo: " + this.modelo);
		System.out.println("Marca: " + this.marca);
		System.out.println("Ano: " + this.ano);
		System.out.println("--------------------");
	}

	
}