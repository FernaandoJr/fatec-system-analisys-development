package model;

import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class RegistroPonto {
	private long idRegPonto;
	private Funcionario func;
	private LocalDate dataRegistro;
	private LocalDateTime horaEntrada;
	private LocalDateTime horaSaida;

	public long getIdRegPonto() {
		return idRegPonto;
	}

	public void setIdRegPonto(long idRegPonto) {
		this.idRegPonto = idRegPonto;
	}

	public Funcionario getFunc() {
		return func;
	}

	public void setFunc(Funcionario func) {
		this.func = func;
	}

	public LocalDate getDataRegistro() {
		return dataRegistro;
	}

	public void setDataRegistro(LocalDate dataRegistro) {
		this.dataRegistro = dataRegistro;
	}

	public LocalDateTime getHoraEntrada() {
		return horaEntrada;
	}

	public void setHoraEntrada(LocalDateTime horaEntrada) {
		this.horaEntrada = horaEntrada;
	}

	public LocalDateTime getHoraSaida() {
		return horaSaida;
	}

	public void setHoraSaida(LocalDateTime horaSaida) {
		this.horaSaida = horaSaida;
	}

	public void apresentarRegistro() {
		DateTimeFormatter dateFormatter = DateTimeFormatter.ofPattern("dd/MM/yyyy");
		DateTimeFormatter timeFormatter = DateTimeFormatter.ofPattern("HH:mm:ss");

		System.out.println("==================================");
		System.out.println(func.toString());
		System.out.println("Data do Registro: " + this.dataRegistro.format(dateFormatter));
		System.out.println("Hora de Entrada: " + this.horaEntrada.format(timeFormatter));

		// Exibe a hora de saída apenas se o funcionário for do tipo Operador
		if (func instanceof Operador) {
			System.out.println("Hora de Saída: " + this.horaSaida.format(timeFormatter));
		}
	}

}