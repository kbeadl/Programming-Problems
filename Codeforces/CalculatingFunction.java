/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/486/A
  Problem 486A - Calculating Function
  Written: May 4, 2016
*/
import java.util.*;

public class CalculatingFunction {
    public static void main(String[] args) {
        //Allows for user input
        Scanner scan = new Scanner(System.in);
        //Gets the user inputed number
        long n = scan.nextLong();
        //Checks to see if the number is divisible by 2
        if(n%2==0)
          //Outputs half the number
          System.out.println(n/2);
        else
          //Outputs a negative version of the number
          //divisible by 2 and added by 1
          System.out.println(-1*((n/2)+1));
    }

}
