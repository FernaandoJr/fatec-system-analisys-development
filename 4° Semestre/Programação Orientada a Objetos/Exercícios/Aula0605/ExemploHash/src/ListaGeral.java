import java.util.ArrayList;
import java.util.List;

public class ListaGeral {
	public static void main(String[] args) {
		List lista = new ArrayList<>();// lista geral

		lista.add(System.currentTimeMillis());
		lista.add("Fernando");
		lista.add(1.5);
		lista.add(1);
		lista.add(new Pessoa(1, "Fernando", "ADS"));
		lista.add(new Pessoa(2, "Ana", "ADS"));

		while (lista.contains("Fernando")) {
			lista.remove("Fernando");
		}

		for (Object item : lista) {
			System.out.println(item);
		}

		// tamanho da lista
		System.out.println("Tamanho: " + lista.size());
		// System.out.println("" + );
		// tem fernando na lista?
		System.out.println("Fernando: " + lista.contains("Fernando"));

	}
}
