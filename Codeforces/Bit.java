/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/282/A
  Problem 282A - Bit++
*/
import java.util.*;

public class Bit {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  //Allows for the taking in of
                                                //user input
        int statements = scan.nextInt();  //User input | # of statements that
                                          //will be preformed
        int total=0;  //Total of the statements
        //Goes through each statement and performs what is stated
        for (int x=0; x<statements;x++)
        {
            String statement = scan.next();  //The statement to be "preformed"
            statement = statement.toLowerCase();  //Puts statement in all lowerc
            //Checks to see what statement was entered, a preforms it
            if (statement.equals("x++")|| statement.equals("++x")) total++;
            else if (statement.equals("x--")|| statement.equals("--x")) total--;
        }
        System.out.println(total);  //Outputs the total
    }
    
}
