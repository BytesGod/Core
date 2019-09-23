/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Exam;

import java.util.Date;
import java.util.Scanner;

/**
 *
 * @author utkar
 */
public class Exam {
    public static void main(String args[]){
        
    }
        public String name, course;
        public int marks[] = new int[5];
    public int roll;
    public String admDate;
    public static int studentCount = 0;;

    public static void studentNumber()
    {
        System.out.println("Number of students admitted : " + studentCount);
    }
    public int getRoll() {
        return roll;
    }

    public void admission() {
        Scanner take = new Scanner(System.in);
        Date date = new Date();
        System.out.println("STUDENT  DETAILS\n");
        System.out.println("\nEnter name: ");
        name = take.nextLine();
        System.out.println("\nEnter course name: ");
        course = take.nextLine();
        admDate = date.toString();
        System.out.println("Admission Date:" + admDate);
        studentCount++;
        roll = studentCount;
        System.out.println("Roll: "+ roll);

    }

    public void getMarks() {
        Scanner take = new Scanner(System.in);
        boolean flag;
        for (int i = 0; i < 5;) {
            flag = true;
            do{
                if(!flag){
                    System.out.println("Wrong input.");
                }
                System.out.println("Enter marks in subject " + (i + 1) + ":");
                marks[i] = take.nextInt();

                flag = false;
            }while((marks[i] > 100) || (marks[i] < 0) );

            i++;

        }


    }

    public void Marksheet() {
        int j;
        System.out.println("STUDENT DETAILS");
        System.out.println("NAME               : " + name);
        System.out.println("ROLL NUMBER        : " + roll);
        System.out.println("COURSE             : " + course);
        System.out.println("ADMISSION DATE     : " + admDate);
        for (j = 0; j < 5; j++){
            System.out
                    .println("MARKS IN SUBJECT " + (j + 1) + " : " + marks[j]);
        }
    }

    public String getName() {
        return name;
    }

    public String getAdmissionDate() {
        return admDate;
    }
    
}
