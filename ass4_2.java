import java.util.*;

abstract class Shape
{
    abstract void area();
}

class Triangle extends Shape
{
    void area()
    {
        Scanner take= new Scanner(System.in);
        
        System.out.println("Enter the width of the Triangle:");
        double b = take.nextDouble();
 
        System.out.println("Enter the height of the Triangle:");
        double h = take.nextDouble();
 
       double area = (b*h)/2;
       System.out.println("Area of Triangle is: " + area);
    }
}

class Rectangle extends Shape
{
    void area()
    {
        Scanner take= new Scanner(System.in);
        
        System.out.println("Enter the length:");
        double l = take.nextDouble();
        
        System.out.println("Enter the breadth:");
        double b = take.nextDouble();
  
        double  area = l*b;
        System.out.println("Area of Rectangle is: " + area);  
    }
}

class Circle extends Shape
{
    void area()
    {
        int r;
        double pi = 3.14, area;
        
        Scanner take = new Scanner(System.in);
        System.out.print("Enter radius of circle:");
        r = take.nextInt();
        area = pi * r * r;
        System.out.println("Area of circle:"+area);
    }
}

public class ass4_2 {
    public static void main(String args[]){
        Triangle Tri = new Triangle();
        Rectangle Rect = new Rectangle();
        Circle Cir = new Circle();
        Tri.area();
        Rect.area();
        Cir.area();
    }
}
