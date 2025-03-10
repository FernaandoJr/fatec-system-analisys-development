import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        int x, y;

		Scanner leitor = new Scanner(System.in);

		System.out.println("Digite o valor de x: ");
		x = Integer.parseInt(leitor.nextLine());

		System.out.println("Digite o valor de y: ");
		y = leitor.nextInt();

		int soma = x + y;
		System.out.println("A soma de x e y é: " + soma);
    }
}
