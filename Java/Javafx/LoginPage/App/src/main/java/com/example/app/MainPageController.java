package com.example.app;

import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.control.Label;

import java.io.IOException;

public class MainPageController {
    //@FXML
    //private Label welcomeName;
    @FXML
    protected void onLogout() throws IOException {
        FXMLLoader fxmlLoader = new FXMLLoader(MainPageController.class.getResource("Login.fxml"));
        Scene scene = new Scene(fxmlLoader.load());
        Main.stage.setScene(scene);
        Main.stage.show();
    }


    @FXML
    public void onCLose() {
        Main.stage.close();
    }
}
