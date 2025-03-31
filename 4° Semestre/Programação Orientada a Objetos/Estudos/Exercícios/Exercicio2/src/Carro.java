public class Carro {
    public static int quantidadeProduzida;
    private String modelo;
    private String marca;
    private String fabricante;


	public Carro(String modelo, String marca, String fabricante){
		this.modelo = modelo;
		this.fabricante = fabricante;
		this.marca = marca;

		quantidadeProduzida++;
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

    // Getter and Setter for fabricante
    public String getFabricante() {
        return fabricante;
    }

    public void setFabricante(String fabricante) {
        this.fabricante = fabricante;
    }
}