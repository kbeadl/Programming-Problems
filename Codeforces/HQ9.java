/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/133/A
  Problem 113A - HQ9+
  Written: October 31, 2015
*/
import java.util.*;

public class HQ9 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  //Allows for user input
        String expression = scan.next();  //Takes in the language expression
        int counter = 0;  //counts how many commands work
        //Goes through each letter to see if it is a valid expression
        for (int x=0;x<expression.length();x++)
        {
            String letter = expression.substring(x, x+1);
            //Adds 1 to the counter if a valid expression is found
            if (letter.equals("H")||letter.equals("Q")||letter.equals("9"))
                counter++;
            
        }
        //Outputs YES or NO depending on if any valid expressions are found
        if (counter>=1) System.out.println("YES");
        else System.out.println("NO");
    }
    
}
