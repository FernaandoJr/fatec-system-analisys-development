import java.util.ArrayList;
import java.util.List;

public class Cliente {
    
    private int codigo;
    private String nomeCliente;
    private String email;

    private List<Carro> carros = new ArrayList<Carro>();

    // Getter and Setter for codigo
    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    // Getter and Setter for nomeCliente
    public String getNomeCliente() {
        return nomeCliente;
    }

    public void setNomeCliente(String nomeCliente) {
        this.nomeCliente = nomeCliente;
    }

    // Getter and Setter for email
    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    // Getter and Setter for carros
    public List<Carro> getCarros() {
        return carros;
    }

    public void setCarros(List<Carro> carros) {
        this.carros = carros;
    }

	//imprimir
	public void imprimir(){
		System.out.println("Dados do cliente: ");
		System.out.println("Código: " + this.codigo);
		System.out.println("Nome: " + this.nomeCliente);
		System.out.println("Email: " + this.email);
		System.out.println("Carros: ");
		if(carros.isEmpty()){
			System.out.println("Nenhum carro cadastrado");
		} else{
			for(Carro carro : carros){
				carro.imprimir();
			}
		}
		System.out.println("--------------------");
	}

	public void adicionarCarro(Carro carro){
		carros.add(carro);
	}
}