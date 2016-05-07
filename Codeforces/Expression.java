/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/479/A
  Problem 479A - Expression
  Written: May 4, 2016
*/
import java.util.*;
public class Expression {
    public static void main(String[] args) {
        //Allows for user input
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();  //The first number
        int b = scan.nextInt();  //The second number
        int c = scan.nextInt();  //The third number
        int total1 = a+b*c;   //Expression type 1
        int total2 = a*(b+c); //Expression type 2
        int total3 = a*b*c;   //Expression type 3
        int total4 = (a+b)*c; //Expression type 4
        int total5 = a+b+c;   //Expression type 5
        //Creates an array with all the totals
        int[] list = {total1, total2, total3, total4, total5};
        //Sorts the totals using a bubble sort
        for(int i =0;i<5-1;i++)
        {
            if(list[i]>list[i+1])
            {
                int temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp;
            }
        }
        System.out.println(list[4]);  //Gets the largest value out of them all
    }

}
