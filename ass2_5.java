    import java.util.*;

    public class ass2_5

    {

        public static void main(String[] args) 

        {

            int n, temp;

            Scanner s = new Scanner(System.in);

            System.out.print("Enter no. of elements you want in array(Minimum 2):");

            n = s.nextInt();

            int a[] = new int[n];

            System.out.println("Enter all the elements:");

            for (int i = 0; i < n; i++) 

            {

                a[i] = s.nextInt();

            }

            for (int i = 0; i < n; i++) 

            {

                for (int j = i + 1; j < n; j++) 

                {

                    if (a[i] > a[j]) 

                    {

                        temp = a[i];

                        a[i] = a[j];

                        a[j] = temp;

                    }

                }

            }

            System.out.println("Second Largest:"+a[n-2]);

            System.out.println("Smallest:"+a[0]);

        }

    }