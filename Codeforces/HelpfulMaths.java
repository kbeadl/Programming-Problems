/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/339/A
  Problem 339A - Helpful Maths
  Written: October 31, 2015
*/
import java.util.*;


public class HelpfulMaths {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  //Allows for user input
        String expression = scan.next();  //Takes in the full expression
        int[] numbers;  //Creates an array
        int numCounter=0;  //Keeps track of how many numbers are in the
                           //expression
        //Gets the amount of numbers in the expression
        for (int x=0;x<expression.length();x+=2)numCounter++;
        //Creates array with the amount of numbers in the expression
        numbers = new int[numCounter];
        int k = 0;  //Position in the expression
        //Fills the array with the numbers in the expression
        for (int x=0;x<numbers.length;x++)
        {
            //Makes the string number into an integer
            int number = Integer.parseInt(expression.substring(k, k+1));
            numbers[x]=number;
            k+=2;
        }
        int y = 0;
        boolean swapped = true;  //checks to see if values have been swapped
        int j = 0;
        int tmp;  //temporary value that stores a number
        //Sorts the numbers using an implementation of Bubble sort
        while (swapped) {
           swapped = false;
            j++;
            //If numbers adjacent aren't sorted, then they are sorted
            for (int i = 0; i < numbers.length - j; i++) {
                  if (numbers[i] > numbers[i + 1]) {
                        tmp = numbers[i];
                        numbers[i] = numbers[i + 1];
                        numbers[i + 1] = tmp;
                        swapped = true;
                  }
            }
      }
        //Prints the expression now from least to greatest integer form
        for (int x=0;x<numbers.length;x++)
        {
            if (x==numbers.length-1) System.out.print(numbers[x]);
            else System.out.print(numbers[x]+"+");
        }
    }

}
