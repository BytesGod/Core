import java.util.*;

abstract class StackClass{
    abstract void push(int i);
    abstract int pop();
    abstract void display();
}

class Test extends StackClass{
    private int arr[];
    private int top, size, len;
    
    public Test(int n)
    {
        size = n;
        len = 0;
        arr = new int[size];
        top = -1;
    }
    
    private boolean isEmpty()
    {
        return top == -1;
    }
    
    public void push(int i)
    {
        if(top + 1 >= size)
            throw new IndexOutOfBoundsException("Overflow Exception");
        if(top + 1 < size )
            arr[++top] = i;
        len++ ;
    }
    
    public int pop()
    {
        if( isEmpty() )
            throw new NoSuchElementException("Underflow Exception");
        len-- ;
        return arr[top--]; 
    }    
    
    public void display()
    {
        System.out.print("\nStack = ");
        if (len == 0)
        {
            System.out.print("Empty\n");
            return ;
        }
        for (int i = top; i >= 0; i--)
            System.out.print(arr[i]+" ");
        System.out.println();
    }
}

public class ass4_1 {
    public static void main(String args[]){
        Scanner take = new Scanner(System.in);  
        System.out.println("Enter Size of Integer Stack ");
        int n = take.nextInt();
        Test obj = new Test(n);
        
        char ch;
        do{
            System.out.println("\nStack Operations");
            System.out.println("1. push");
            System.out.println("2. pop");
            System.out.println("3. display");
            System.out.println("4. exit");
        
            int choice = take.nextInt();
            switch (choice)
            {
                case 1 : 
                    System.out.println("Enter integer element to push");
                    try 
                    {
                        obj.push( take.nextInt() );
                    }
                    catch (Exception e)
                    {
                        System.out.println("Error : " + e.getMessage());
                    }   
                    break;
                    
                case 2 : 
                    try
                    {
                        System.out.println("Popped Element = " + obj.pop());
                    }
                    catch (Exception e)
                    {
                        System.out.println("Error : " + e.getMessage());
                    }    
                    break; 
                    
                case 3 :         
                    obj.display();
                    break; 
                    
                case 4 : 
                    break;
                    
                default :
                    System.out.println("Invalid choice.");
                    break;
            }
          
            System.out.println("\nDo you want to continue (Type y or n) \n");
            ch = take.next().charAt(0);
        }while(ch == 'Y'|| ch == 'y');
    }  
}
