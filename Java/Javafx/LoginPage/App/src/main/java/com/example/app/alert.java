package com.example.app;

import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.AnchorPane;
import javafx.scene.layout.VBox;
import javafx.stage.Modality;
import javafx.stage.Stage;

import java.io.IOException;

public class alert {
    public static void fillThemAll() {
        Stage stage = new Stage();
        stage.initModality(Modality.APPLICATION_MODAL);
        stage.setMinWidth(400);
        stage.setMinHeight(200);

        Label label = new Label("FILL ALL THE BLANKS");
        label.setLayoutY(60);
        label.setLayoutX(120);

        Button button = new Button("OK");
        button.setLayoutY(100);
        button.setLayoutX(170);
        button.setOnAction(event -> {
            stage.close();
        });

        AnchorPane layout  = new AnchorPane();
        layout.getChildren().addAll(label, button);
        Scene scene = new Scene(layout);
        stage.setScene(scene);
        stage.showAndWait();
    }

    public static void incorecct() {
        Stage stage = new Stage();
        stage.initModality(Modality.APPLICATION_MODAL);
        stage.setMinWidth(400);
        stage.setMinHeight(200);

        Label label = new Label("incorrect");
        label.setLayoutY(60);
        label.setLayoutX(170);

        Button button = new Button("Register");
        button.setLayoutY(100);
        button.setLayoutX(170);
        button.setOnAction(event -> {
            FXMLLoader fxmlLoader = new FXMLLoader(alert.class.getResource("Register.fxml"));
            try {
                Scene newScene = new Scene(fxmlLoader.load());
                Main.stage.setScene(newScene);
                Main.stage.show();
                stage.close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        });

        Button close = new Button("close");
        close.setLayoutY(145);
        close.setLayoutX(180);
        close.setOnAction(event -> {
            stage.close();
        });

        AnchorPane layout  = new AnchorPane();
        layout.getChildren().addAll(label, button, close);
        Scene scene = new Scene(layout);
        stage.setScene(scene);
        stage.showAndWait();
    }

    public static void confirm() {
        Stage stage = new Stage();
        stage.initModality(Modality.APPLICATION_MODAL);
        stage.setMinWidth(400);
        stage.setMinHeight(200);

        Label label = new Label("WE WILL SEND YOU A LINK SOON..");
        label.setLayoutY(60);
        label.setLayoutX(100);

        Button button = new Button("OK");
        button.setLayoutY(100);
        button.setLayoutX(180);
        button.setOnAction(event -> {
            FXMLLoader fxmlLoader = new FXMLLoader(alert.class.getResource("Login.fxml"));
            try {
                Scene newScene = new Scene(fxmlLoader.load());
                Main.stage.setScene(newScene);
                Main.stage.show();
                stage.close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        });

        AnchorPane layout  = new AnchorPane();
        layout.getChildren().addAll(label, button);
        Scene scene = new Scene(layout);
        stage.setScene(scene);
        stage.showAndWait();
    }
}
