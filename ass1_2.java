import java.util.*;

public class ass1_2 {
    public static void main(String args[]) throws Exception {
      String str = "sampleString";
      int i = 0;
      for(char c: str.toCharArray()) {
         i++;
      }
      System.out.println("Length of the given string ::"+i);
      for (int j=0;j<i/2;j++)
      {
          System.out.print(str.charAt(j));
      }
   }
    
}
