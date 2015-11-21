/* 
    Programmer: Kyle Beadle 
    Codeforces Link: http://codeforces.com/problemset/problem/472/A
    Problem 472A - Design Tutorial: Learn from Math 
    Written: November 13, 2015 
*/ 
import java.util.*;

public class LearnMath {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  //Allows for user input
        int number = scan.nextInt();  //Takes in the number from the user
        boolean notFound = true;  //checks to see if the numbers have been found
        int x = (int)Math.floor(number/2.0);  //Lowest value of the number/2
        int y = (int)Math.ceil(number/2.0);  //Highest value of the number/2
        //Goes through the loop while the numbers are not found
        while(notFound)
        {
            boolean xPrime = isPrime(x);  //checks to see if x is prime
            boolean yPrime = isPrime(y);  //checks to see if y is prime
            //Says the numbers are found if they are both composite and whose
            //sum equals number
            if((xPrime==false&&yPrime==false)&&(x+y==number))
            {
                notFound = false;
            }
            //Subtracts from x and adds to y if the numbers are not conditions
            else
            {
                x--;
                y++;
            }
        }
        System.out.println(x +" "+y); //Outputs x and y
    }
    /**
     * Finds if a number is prime.
     * @param number - number to be tested
     * @retrun true if the number is prime, false otherwise
    */
    public static boolean isPrime(int number) 
    { 
      if (number == 1) 
            return false; 
      if (number == 2) 
            return true; 
      if (number % 2 == 0) 
            return false; 
      for (int d = 3; d <= (int) Math.sqrt(number); d++) 
            if (number % d == 0) 
                  return false; 
      return true; 
    }

}


