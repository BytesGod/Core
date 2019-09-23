import java.io.*;
import java.util.*;
import java.lang.*;

public class ass2_7 {
    public static void main(String args[]){
       try
       {
            Scanner take = new Scanner(System.in);
            String s;
            int l;
            System.out.println("Enter the String : ");
            s = take.nextLine();
            l = s.length();
            for(int i=0; i<l;i++)
            {
                for(int j=0; j<l-(i+1); j++)
                {
                    System.out.print(" ");
                }

                for(int j=0;j<i;j++)
                {
                    System.out.printf("%c ",s.charAt(j));
                }
                System.out.printf("%c\n",s.charAt(i));
            }     
       }
       catch(Exception e)
       {
           System.err.println(e);
       }
    }
}