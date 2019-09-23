package Students;
import Exam.Exam;
import static java.lang.Thread.sleep;

import java.util.*;

public class ass5_1 {
public static void main(String[] args) throws InterruptedException {
    Scanner take = new Scanner(System.in);
    int size;
    System.out.println("\nEnter the maximum number of student:");
    size = take.nextInt();
    int i = 0;
    boolean flag = false;
    Exam list[] = new Exam[size];
    char choice;
    while (!flag) {
        System.out
                .println("\n\n*******************Student Admission********************\n");
        System.out.println("1. Admission");
        System.out.println("2. Enter marks");
        System.out.println("3. Display marksheet");
        System.out.println("4. Total number of students");
        System.out.println("6. Exit");
        System.out.println("Enter choice: ");
        choice = take.next().charAt(0);
        switch (choice) {
        case '1':
            if (i >= size) {
                System.out.println("Maximum student capacity reached");
                break;
            }
            list[i] = new Exam();
            list[i].admission();
            list[i].getMarks();
            i++;
            break;
        case '2': {
            int j, k;
            System.out
                    .println("Enter the student roll number whose marksheet is to be prepared: ");
            k = take.nextInt();
            for (j = 0; j < Exam.studentCount; j++) {
                if (list[j].getRoll() == k) {
                    list[j].getMarks();
                    break;
                }
            }
            if (j == Exam.studentCount)
                System.out.println("Student not admitted yet\n");
            break;
        }
        case '3': {
            int j, k;
            System.out
                    .println("Enter the student roll number whose marksheet is to be displayed: ");
            k = take.nextInt();
            for (j = 0; j < Exam.studentCount; j++) {
                if (list[j].getRoll() == k) {
                    list[j].Marksheet();
                    sleep(1000);
                    break;
                }
            }
            if (j == Exam.studentCount)
                System.out.println("Student not admitted yet\n");
            sleep(1000);

            break;
        }
        case '4':
            System.out.println("Total students: ");
            Exam.studentNumber();
            sleep(1000);
            break;
        case '6':
            System.out.println("Thank You");
            flag = true;
            sleep(1000);
            break;
        default:
            System.out.println("\nInvalid choice");
        }
    }
    take.close();
    }
}