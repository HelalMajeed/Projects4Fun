package com.example.app;

import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextField;

import java.io.IOException;
import java.util.Objects;

public class LoginController {
    @FXML
    private TextField username;
    @FXML
    private PasswordField password;
    @FXML
    protected void forgetPassword() throws IOException {
        FXMLLoader fxmlLoader = new FXMLLoader(LoginController.class.getResource("forgetPass.fxml"));
        Scene scene = new Scene(fxmlLoader.load());
        Main.stage.setScene(scene);
        Main.stage.show();
    }

    @FXML
    protected void loginButton() throws IOException {
        if (Objects.equals(username.getText(), "admin") && Objects.equals(password.getText(), "admin")) {
            FXMLLoader fxmlLoader = new FXMLLoader(LoginController.class.getResource("Main.fxml"));
            Scene scene = new Scene(fxmlLoader.load());
            Main.stage.setScene(scene);
            Main.stage.show();
        }
        else {
            alert.incorecct();
        }
    }

    @FXML
    protected void registerButton() throws IOException {
        FXMLLoader fxmlLoader = new FXMLLoader(LoginController.class.getResource("Register.fxml"));
        Scene scene = new Scene(fxmlLoader.load());
        Main.stage.setScene(scene);
        Main.stage.show();
    }
}
