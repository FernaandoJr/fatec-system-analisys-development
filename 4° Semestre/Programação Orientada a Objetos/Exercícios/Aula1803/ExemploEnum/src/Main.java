public class Main {
	public static void main(String[] args) {
		DiasSemana dia = DiasSemana.QUINTA;

		System.out.println(dia);

		for (DiasSemana d : DiasSemana.values()) {
			System.out.println(d);
		}
	}
}
