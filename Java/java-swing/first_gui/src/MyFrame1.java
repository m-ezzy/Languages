import java.awt.Color;
import javax.swing.ImageIcon;
import javax.swing.JFrame;

public class MyFrame1 extends JFrame {
    MyFrame1() {
        this.setTitle("my window title");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setResizable(false);
        this.setSize(400,400);
        this.setVisible(true);

        ImageIcon image = new ImageIcon("C:\\Users\\Murtaza\\Downloads\\P.png");
        this.setIconImage(image.getImage());
        this.getContentPane().setBackground(new Color(0,0,250));
    }
}
