/* 
     Class : T.Y.BSc. Sem-5			Sem:  Div : A
     Subject Name: java
-------------------------------------------------------------------------
     PC No: SRKI_034		        Faculty Name: Rupal Mam

     Enrollment Number: E17111920310042 	Roll_No: 23
     Student Name : Hirpara Rutvi
-------------------------------------------------------------------------

     Assignment/Problem: 7/2	Date: 30/9/2019
   
     
-------------------------------------------------------------------------


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ass7;

/**
 *
 * @author srki-035
 */
public class ass7_2
{
     public static void main(String args[])
    {
   
    
      int x[]=new int[100];
       int sum=0;
        double avg=0;
       
        for(int i=0;i<args.length;i++)
        {          
            x[i]=Integer.parseInt(args[i]);
           sum+=x[i];
        }
        
        
        
        System.out.println("addition :"+sum);
        System.out.println("Average : "+((sum)/(args.length)));
        
    }
    
}
