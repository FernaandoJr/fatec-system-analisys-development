import javax.swing.*;
import java.awt.Color;
import helper_classes.*;

public class App {
	public static void main(String[] args) {
		JFrame frame = new JFrame("Form de Login");
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.setSize(606, 326);
		JPanel panel = new JPanel();
		panel.setLayout(null);
		panel.setBackground(Color.decode("#f4c064"));

		JLabel labelLogin = new JLabel("Login");
		labelLogin.setBounds(252, 29, 81, 40);
		labelLogin.setFont(CustomFontLoader.loadFont("./resources/fonts/Lexend.ttf", 30));
		labelLogin.setForeground(Color.decode("#000"));
		panel.add(labelLogin);

		JTextField inputUsername = new JTextField("");
		inputUsername.setBounds(209, 85, 200, 30);
		inputUsername.setFont(CustomFontLoader.loadFont("./resources/fonts/Lexend.ttf", 20));
		inputUsername.setBackground(Color.decode("#ffe7bf"));
		inputUsername.setForeground(Color.decode("#73664e"));
		inputUsername.setBorder(new RoundedBorder(2, Color.decode("#000"), 1));
		OnFocusEventHelper.setOnFocusText(inputUsername, "Digite seu usuário", Color.decode("#000"),
				Color.decode("#73664e"));
		panel.add(inputUsername);

		JPasswordField inputPassword = new JPasswordField("");
		inputPassword.setBounds(210, 124, 200, 23);
		inputPassword.setFont(CustomFontLoader.loadFont("./resources/fonts/Lexend.ttf", 20));
		inputPassword.setBackground(Color.decode("#ffe7bf"));
		inputPassword.setForeground(Color.decode("#73664e"));
		inputPassword.setBorder(new RoundedBorder(2, Color.decode("#000"), 1));
		OnFocusEventHelper.setOnFocusText(inputPassword, "", Color.decode("#000"), Color.decode("#73664e"));
		panel.add(inputPassword);

		JButton btnLogin = new JButton("Entrar");
		btnLogin.setBounds(246, 165, 106, 30);
		btnLogin.setBackground(Color.decode("#bca8e4"));
		btnLogin.setForeground(Color.decode("#000"));
		btnLogin.setFont(CustomFontLoader.loadFont("./resources/fonts/Lexend.ttf", 14));
		btnLogin.setBorder(new RoundedBorder(4, Color.decode("#3d364a"), 1));
		btnLogin.setFocusPainted(false);

		btnLogin.addActionListener(e -> {
			try {
				String username = inputUsername.getText();
				String password = new String(inputPassword.getPassword());

				if (username.isEmpty() || password.isEmpty()) {
					JOptionPane.showMessageDialog(frame, "Preencha todos os campos!");
					return;
				} else {
					JOptionPane.showMessageDialog(frame, "Login realizado com sucesso!");
				}

			} catch (IllegalArgumentException exIllegal) {
				JOptionPane.showMessageDialog(frame, "Erro ao realizar login: " + exIllegal.getMessage());
			} catch (Exception ex) {
				JOptionPane.showMessageDialog(frame, "Erro inesperado: " + ex.getMessage());
			} finally {
				inputPassword.setText("");
				inputUsername.requestFocus();
			}
		});

		panel.add(btnLogin);
		frame.add(panel);
		frame.setVisible(true);
	}
}