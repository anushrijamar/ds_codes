import java.util.*;

import javax.sound.sampled.SourceDataLine;
import javax.swing.event.SwingPropertyChangeSupport;
public class task2 {
    
    int play()
    {
        task2 obj = new task2();
        Scanner sc = new Scanner(System.in);
        int number,count=0,k=40,v=10,flag=0,p=0;
        while(count<=5)
        {
            System.out.println("Guess the number");
            number=sc.nextInt();
            if(number==k)
            {
                System.out.println("---------------------------------------");
                System.out.println("---------------------------------------");
                System.out.println("CONGRAGULATIONS YOU WON");
                System.out.println("---------------------------------------");
                System.out.println("---------------------------------------");
                v=v+10;
                System.out.println("\nYour current point grades is "+v);
                count=0;
                flag=1;
                p=0;
                return 1;
            }
            else{
                System.out.println("---------------------------------------");
                System.out.println("---------------------------------------");
                System.out.println("SORRY!! GUESS IT AGAIN");
                System.out.println("---------------------------------------");
                System.out.println("---------------------------------------");
                Scanner y = new Scanner(System.in);
                System.out.println("Do you want hints");
                String res = y.nextLine();
                if(res.equalsIgnoreCase("yes"))
                {
                    obj.hint();
                    p++;
                      if(p==3)
            {
                System.out.println("Sorry your hints are over");
            }
                }
            count++;
            }
          
        }
        if(flag!=1){
            System.out.println("---------------------------------------");
            System.out.println("---------------------------------------");
        System.out.println("BETTER LUCK NEXT TIME");
        System.out.println("---------------------------------------");
        System.out.println("---------------------------------------");
    }
return 0;}
    void hint()
    {
        System.out.println("Its a mysterious even less than the middle");
    }
    public static void main(String[] args) {
{
    String res="yes";
    System.out.println("---------------------------------------");
    System.out.println("---------------------------------------");
        System.out.println("WELCOME TO GUESS THE NUMBER");
            System.out.println("---------------------------------------");
    System.out.println("---------------------------------------");
    task2 o = new task2();
    o.play();
    Scanner y = new Scanner(System.in);
    while(res.equalsIgnoreCase("yes"))
    {
        System.out.println("do you want to play again");
        res = y.nextLine();
        if(res.equalsIgnoreCase("yes"))
        o.play();
    }
}
    }
}