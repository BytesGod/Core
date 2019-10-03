/* 
     Class : T.Y.BSc. Sem-5			Sem:  Div : A
     Subject Name: java
-------------------------------------------------------------------------
     PC No: SRKI_034		        Faculty Name: Rupal Mam

     Enrollment Number: E17111920310042 	Roll_No: 23
     Student Name : Hirpara Rutvi
-------------------------------------------------------------------------

     Assignment/Problem: 7/3	Date: 30/9/2019
   
     
--------------------------------------------------------------------------*/


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
public class ass7_3 {
  
    public static void main(String args[])
    {
        int s2=Integer.parseInt(args[0]);
        int s3=Integer.parseInt(args[1]);

        String s="";
        int num=0;
        for(int i=s2;i<s3;i++)
        {
            int c=0;
            for(num=i;num>=1;num--)
            {
                if(i%num==0)
                {
                    c+=1;
                }
            }
            if(c==2)
            {
                s=s+i+" ";
            }

        }
   
        System.out.println("prime numbers are :" +s);

    }
}

