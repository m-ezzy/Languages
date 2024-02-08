/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/javafx/FXMain.java to edit this template
 */
package javafx_app1;

import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.event.EventType;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

import javafx.scene.control.*;
import javafx.event.*;
import javafx.scene.input.KeyEvent;

/**
 *
 * @author murtaza
 */
public class JavaFX_app1 extends Application {
    
    @Override
    public void start(Stage primaryStage) {
        Button btn = new Button();
        btn.setText("Say 'Hello World'");
        btn.setOnAction(new EventHandler<ActionEvent>() {
            
            @Override
            public void handle(ActionEvent event) {
                System.out.println("Hello World!");
            }
        });
        
        TextField tf = new TextField();
//        String v = tf.getText();
        
        Label l = new Label();
        
        tf.setOnKeyReleased((KeyEvent event) -> {
            System.out.println("Hello World! " + event.getSource() + " " + event.toString());
            l.setText(tf.getText());
        });
        
        StackPane root = new StackPane();
        
        root.getChildren().add(btn);
        root.getChildren().add(tf);
        root.getChildren().add(l);
        
        Scene scene = new Scene(root, 300, 250);
        
        primaryStage.setTitle("Hello World!");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        launch(args);
    }
    
}
