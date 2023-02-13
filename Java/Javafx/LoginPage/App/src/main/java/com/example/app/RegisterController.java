package com.example.app;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextField;

import java.io.IOException;
import java.util.Objects;

public class RegisterController {
    @FXML
    private static TextField firstName, lastName, email, phone, username;
    @FXML
    private PasswordField password, confirmPassword;
    @FXML
    protected void backToLoginPage() throws IOException {
        FXMLLoader fxmlLoader = new FXMLLoader(Main.class.getResource("Login.fxml"));
        Scene scene = new Scene(fxmlLoader.load());
        Main.stage.setScene(scene);
        Main.stage.show();
    }
    @FXML
    protected void afterRegister(ActionEvent event) throws NullPointerException{
        if (confirmPassword.getText().isEmpty() && password.getText().isEmpty() && username.getText().isEmpty())
            alert.fillThemAll();
        else {
            FXMLLoader fxmlLoader = new FXMLLoader(Main.class.getResource("Main.fxml"));
            Scene scene = null;
            try {
                scene = new Scene(fxmlLoader.load());
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
            Main.stage.setScene(scene);
            Main.stage.show();
        }
    }
}
