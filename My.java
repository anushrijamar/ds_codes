import java.awt.FlowLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import java.awt.Container;
import java.awt.Component;
import java.awt.Graphics;
import java.awt.GridLayout;
import java.awt.Insets;
import java.awt.*;
import javax.swing.*;
public class My{
    private static Container makeIt (String title,boolean more)
    {
        JPanel container = new JPanel(){
            public void paintComponent(Graphics g)
            {
                int h;
                super.paintComponent(g);
                Insets ins=getInsets();
                int w=getWidth()-ins.left -ins.right;
                int half=w/2 +ins.left;
                 h=getHeight();
                h=h/2 + ins.top;
               // g.drawLine(half,0,half,h);
            }
        };
        for(int i=0;i<2;i++){
            JButton button=new JButton();
            button.setText("click me" +i);
            container.add(button);
            button.setBounds(500,500);
            button.setAlignmentX(0.25f);
            button.setAlignmentY(0.75f);
        } 
        JMenuBar menu=new JMenuBar();
        JMenu mb=new JMenu("size");
        JMenuItem size=new JMenuItem("size");
        mb.add(size);
        menu.add(mb);
        UIManager.put("MenuBar.background",Color.blue);






        return container;
    }
    public static void main(String args[])
    {
        JFrame f=new JFrame("HEALTHIGO");
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Container panel1=makeIt("Mixed",false);
        Container panel2=makeIt("Mixed",true);
        Container cp=f.getContentPane();
        cp.setLayout(new GridLayout(1,2));
        cp.add(panel1);
        cp.add(panel2);
        f.setSize (600,600);
        f.setVisible(true);
    }
}