package view;

import java.time.LocalDate;
import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;

import model.Gerente;
import model.Operador;
import model.RegistroPonto;
import model.Secretaria;

public class GerenciarControlePonto {
	List<RegistroPonto> pontos = new ArrayList<>();

	public static void main(String[] args) throws InterruptedException {
		GerenciarControlePonto gc = new GerenciarControlePonto();
		Gerente gerente1 = new Gerente(1, "Fernando", "fernando@teste.com", "50682680893", "fernando.gerente",
				"coxinha123");
		Secretaria secretaria1 = new Secretaria(2, "Maria", "maria@teste.com", "12345678901", "maria.secretaria",
				"senha123");

		Operador operador1 = new Operador(3, "Joao", "joao@teste.com", "98765432100", 2000.0);

		Gerente gerente2 = new Gerente(4, "Carlos", "carlos@teste.com", "11223344556", "carlos.gerente", "senha456");
		Secretaria secretaria2 = new Secretaria(5, "Ana", "ana@teste.com", "22334455667", "ana.secretaria", "senha789");
		Operador operador2 = new Operador(6, "Pedro", "pedro@teste.com", "33445566778", 2500.0);

		RegistroPonto reg1 = new RegistroPonto();
		reg1.setFunc(gerente1);
		reg1.setDataRegistro(LocalDate.now());
		reg1.setHoraEntrada(LocalDateTime.now());
		Thread.sleep(1000);
		reg1.setHoraSaida(LocalDateTime.now());
		gc.addPontos(reg1);

		RegistroPonto reg2 = new RegistroPonto();
		reg2.setFunc(secretaria1);
		reg2.setDataRegistro(LocalDate.now());
		reg2.setHoraEntrada(LocalDateTime.now());
		Thread.sleep(1000);
		reg2.setHoraSaida(LocalDateTime.now());
		gc.addPontos(reg2);

		RegistroPonto reg3 = new RegistroPonto();
		reg3.setFunc(operador1);
		reg3.setDataRegistro(LocalDate.now());
		reg3.setHoraEntrada(LocalDateTime.now());
		Thread.sleep(1000);
		reg3.setHoraSaida(LocalDateTime.now());
		gc.addPontos(reg3);

		RegistroPonto reg4 = new RegistroPonto();
		reg4.setFunc(gerente2);
		reg4.setDataRegistro(LocalDate.now());
		reg4.setHoraEntrada(LocalDateTime.now());
		Thread.sleep(1000);
		reg4.setHoraSaida(LocalDateTime.now());
		gc.addPontos(reg4);

		RegistroPonto reg5 = new RegistroPonto();
		reg5.setFunc(secretaria2);
		reg5.setDataRegistro(LocalDate.now());
		reg5.setHoraEntrada(LocalDateTime.now());
		Thread.sleep(1000);
		reg5.setHoraSaida(LocalDateTime.now());
		gc.addPontos(reg5);

		RegistroPonto reg6 = new RegistroPonto();
		reg6.setFunc(operador2);
		reg6.setDataRegistro(LocalDate.now());
		reg6.setHoraEntrada(LocalDateTime.now());
		Thread.sleep(1000);
		reg6.setHoraSaida(LocalDateTime.now());
		gc.addPontos(reg6);

		gc.listarPontos();
	}

	public void listarPontos() {
		for (RegistroPonto rg : pontos) {
			rg.apresentarRegistro();
		}
	}

	public void addPontos(RegistroPonto ponto) {
		this.pontos.add(ponto);
	}
}
