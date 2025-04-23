package gui;

import model.Caixa;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.time.LocalDateTime;

public class TelaMovimento extends JFrame implements ActionListener {
    protected Dimension dLabel, dButton, dTextArea, dTextField, dFrame;
    protected Button cmdEntrada, cmdRetirada, cmdConsulta, cmdSair;
    protected TextField txtValor, txtSaldo;
    protected Label lblValor, lblSaldo;
    protected TextArea txtMsg;
    private Caixa caixa;


    // Construtor personalizado
    public TelaMovimento() {
        //instalar caixa
        caixa = new Caixa();

        //Definir a aparencia da janela
        dFrame = new Dimension(350, 400);
        dLabel = new Dimension(40, 20);
        dTextField = new Dimension(150, 20);
        dButton = new Dimension(95,20);
        dTextArea = new Dimension(300, 140);

        //aparencia da propria janela
        setSize(dFrame);
        setTitle("Controle de caixa");
        setLocationRelativeTo(null); //centraliza a janela
        setDefaultCloseOperation(EXIT_ON_CLOSE); //fecha o programa
        setLayout(null); //define o posicionamento manualmente

        //definindo a aparecencia dos controles que irão na janela
        lblValor = new Label("Valor: ");
        lblValor.setSize(dLabel);
        lblValor.setLocation(25, 50);
        add(lblValor);

        lblSaldo = new Label("Saldo: ");
        lblSaldo.setSize(dLabel);
        lblSaldo.setLocation(25, 80);
        add(lblSaldo);

        txtValor = new TextField("");
        txtValor.setSize(dTextField);
        txtValor.setLocation(75, 50);
        add(txtValor);

        txtSaldo = new TextField("");
        txtSaldo.setSize(dTextField);
        txtSaldo.setLocation(75, 80);
        add(txtSaldo);

        cmdEntrada = new Button("Depositar");
        cmdEntrada.setSize(dButton);
        cmdEntrada.setLocation(25, 150);
        cmdEntrada.addActionListener(this);
        add(cmdEntrada);

        cmdRetirada = new Button("Sacar");
        cmdRetirada.setSize(dButton);
        cmdRetirada.setLocation(225, 150);
        cmdRetirada.addActionListener(this);
        add(cmdRetirada);

        cmdConsulta = new Button("Consultar");
        cmdConsulta.setSize(dButton);
        cmdConsulta.setLocation(25, 185);
        cmdConsulta.addActionListener(this);
        add(cmdConsulta);

        cmdSair = new Button("Sair");
        cmdSair.setSize(dButton);
        cmdSair.setLocation(225, 185);
        cmdSair.addActionListener(this);
        add(cmdSair);


        txtMsg = new TextArea(null);
        txtMsg.setSize(dTextArea);
        txtMsg.setLocation(25, 220);
        add(txtMsg);




    }

    /**
     * Invoked when an action occurs.
     *
     * @param e the event to be processed
     */
    @Override
    public void actionPerformed(ActionEvent e) {
        if(e.getSource() == cmdEntrada) {
            double valor = Double.parseDouble(txtValor.getText());
            caixa.depositar(valor);
            LocalDateTime momento = LocalDateTime.now();
            txtMsg.append("Deposito efetuado com sucesso! \n");
            txtMsg.append("Data/Hora: " + momento + "\n");
            txtValor.setText("");
            txtValor.requestFocus();
            return;
        }

        if(e.getSource() == cmdRetirada) {
            // faz a rotina do sacar
            double valor = Double.parseDouble(txtValor.getText());
            caixa.sacar(valor);
            LocalDateTime momento = LocalDateTime.now();
            txtMsg.append("Saque efetuado com sucesso! \n");
            txtMsg.append("Data/Hora: " + momento + "\n");
            txtValor.setText("");
            txtValor.requestFocus();
            return;
        }

        if(e.getSource() == cmdConsulta) {
            txtSaldo.setText(Double.toString(caixa.getSaldo()));
            return;
        }

        if(e.getSource() == cmdSair) {
            System.exit(0);
        }
    }
}

