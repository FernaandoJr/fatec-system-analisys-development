import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner leitor = new Scanner(System.in);
		int a,b;

		System.out.println("Digite o valor de a: ");
		a = Integer.parseInt(leitor.nextLine());
		
		System.out.println("Digite o valor de b: ");
		b = Integer.parseInt(leitor.nextLine());


		int soma = a + b;

		System.out.printf("%d + %d = %d \n", a, b, soma);
		leitor.close();
	}
}
