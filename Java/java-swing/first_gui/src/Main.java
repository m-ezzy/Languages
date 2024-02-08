import java.awt.Color;
import javax.swing.ImageIcon;
import javax.swing.JFrame;
import javax.swing.JLabel;

public class Main {
    public static void main(String[] args){
        ImageIcon image2 = new ImageIcon("C:\\Users\\Murtaza\\Downloads\\P.png");

        JLabel label = new JLabel();
        label.setText("well hello there!");
        label.setIcon(image2);

        MyFrame frame = new MyFrame();
        frame.add(label);
    }
}
