/* 
     Class : T.Y.BSc. Sem-5			Sem:  Div : A
     Subject Name: java
-------------------------------------------------------------------------
     PC No: SRKI_034		        Faculty Name: Rupal Mam

     Enrollment Number: E17111920310042 	Roll_No: 23
     Student Name : Hirpara Rutvi
-------------------------------------------------------------------------

     Assignment/Problem: 7/1		Date: 30/9/2019
   
     
--------------------------------------------------------------------------*/


package ass7;
import java.util.*;


public class ass7_1
{
   public static void main(String args[])
   {
        int ci, i, j, k, l=0;
        String str, str1;
        char c, ch;
        Scanner scan = new Scanner(System.in);
        
        System.out.print("Enter a String : ");
        str=scan.nextLine();
        
        i=str.length();
        for(c='A'; c<='z'; c++)
        {
            k=0;
            for(j=0; j<i; j++)
            {
                ch = str.charAt(j);
                if(ch == c)
                {
                    k++;
                }
            }
            if(k>0)
            {
                System.out.println("The character " + c + " has occurred for " + k + " times");
            }
        }
   }
}
