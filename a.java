import java.rmi.server.ObjID;
import java.util.*;
import java.util.Scanner;
import java.lang.*;
public class a{
    public static void main(String args[])
    {
        int i;
        String y;
        a obj=new a();
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(i=t;i>=0;i--){
        System.out.println("enter length of string 1 and 2");
        int a=sc.nextInt();
       int b=sc.nextInt();
       System.out.println("Enter the string");
       y=sc.next();
     String c=sc.next();
      System.out.println(obj.reverseString(y));
      System.out.println(obj.reverseString(c));}
     
    }
    public static String reverseString(String str)
    {
        StringBuilder s=new StringBuilder(str);
        s.reverse();
        return s.toString();
    }
}