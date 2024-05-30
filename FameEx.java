import java.awt.FlowLayout;
import java.awt.*; 
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.*;
import javax.swing.JPanel;
import java.awt.Container;
import java.awt.Component; 
import java.awt.Graphics;
import java.awt.GridLayout;
import java.awt.Insets;
import java.awt.MenuComponent;
// import java.awt.container;
public class FameEx{
    public static void main(String args[])
    {
       // System.out.println("");
        JFrame frame=new JFrame("HEALTHIGO");
        // String[] imagedatset =new String[]{"HEALTHIGO__2_-removebg-preview.png"};
        // ListDisplayPanel uberPanel=new ListDisplayPanel();
        
        JPanel panel=new JPanel();
        panel.setLayout(new FlowLayout());
        JLabel label=new JLabel("\t\t\t\t\tWelcome to HEALTHIGO\t\t\t\t\t\n");
        panel.add(label);
        JMenuBar menu=new JMenuBar();
        JMenu mb=new JMenu("size");
        JMenuItem size=new JMenuItem("size");
        mb.add(size);
        menu.add(mb);
        UIManager.put("MenuBar.background",Color.blue);
        JLabel label1=new JLabel("\n");
        panel.add(label1);
        for(int i=0;i<5;i++){
        JButton button=new JButton();
        button.setText("click me" +i);
       panel.add(button);}
        frame.add(panel);
        frame.setSize(600,600);
       frame.setLocationRelativeTo(null);
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}