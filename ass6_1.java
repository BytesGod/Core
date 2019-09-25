
import java.util.*;

public class ass6_1 {
    public static void main(String[] args) {
        try{
            Scanner take = new Scanner(System.in);
            int a,b,n;
            System.out.println("Enter the number first number :");
            a = take.nextInt();
            System.out.println("Enter the number second number :");
            b = take.nextInt();
            n = a/b;
            System.out.println("Number " + a + " divided by " + b);
            System.out.println("Result : " + n);
        }catch(Exception e){
            System.out.println("Caught Exception while trying to divide 100 by zero : "+ e.toString());
        }
    }
}