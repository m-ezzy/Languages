import java.awt.Color;
import javax.swing.ImageIcon;
import javax.swing.JFrame;

public class MyFrame2 extends JFrame {
    MyFrame2() {
        this.setTitle("my window title");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setResizable(false);
        this.setSize(400,400);
        this.setVisible(true);

        ImageIcon image = new ImageIcon("C:\\Users\\Murtaza\\Downloads\\P.png");
        this.setIconImage(image.getImage());
        this.getContentPane().setBackground(new Color(123,50,250));
    }
}
