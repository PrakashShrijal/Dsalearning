import java.awt.*;

import java.awt.event.*;

public class MyFrame extends Frame{

MyFrame(){

Frame f = new Frame();

setSize(600,600);

setVisible(true);

setLayout(null);

Label L = new Label("name");

L.setBounds (100, 100, 50,50);

L.setForeground(Color.MAGENTA);

add(L);

Button b1 = new Button("Click here");

b1.setBounds (100,150,100,30);

b1.setBackground(Color.GREEN);

b1.setForeground(Color.CYAN);

add(b1);

b1.addActionListener(e-> System.out.println("Click here"));

addWindowListener(new WindowAdapter(){

public void windowClosing (WindowEvent we){

System.out.println("Window Closing");

//System.exit(0);

dispose();

}

Type