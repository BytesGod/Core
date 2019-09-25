    
import java.util.*;
     
class AgeException extends Exception {
    public AgeException(String str) {
      System.out.println(str);
    }
}

public class ass6_2 {
    public static void main(String[] args) {
    Scanner take = new Scanner(System.in);
    System.out.print("Enter your age : ");
    int age = take.nextInt();
      
    try {
        if(age < 18) 
            throw new AgeException("Invalid age exception");
        else
            System.out.println("Registration successfully done");
        }
        catch (AgeException a) {
            System.out.println(a);
        }
    }
}