/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/119/A
  Problem 119A - Epic Game
  Written: November 6, 2015
*/
import java.util.*;

public class EpicGame {

    //Calculates the greates common divisor recursively
    private static int findGCD(int n1, int n2) {
        if(n2 == 0){
            return n1;
        }
        return findGCD(n2, n1%n2);
    }
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  //Allows for user input
        int a = scan.nextInt();  //stones that Simon has
        int b = scan.nextInt();  //stones that Antisimon has
        int n = scan.nextInt();  //Stones on the board
        int total=0;  //turns completed
        //Gets the GCD and subrtracts it from n while stones are on the board
        while (n>=0)
        {
            //If number of stones is even find the GCD of Simon else Antisimon
            if(n%2==0)n -= findGCD(a,n);
            else n -= findGCD(b,n);
            total++;  //Add one turn
        }
        //Output if Simon or Antisimon has won
        if (total%2==0)System.out.println(0);
        else System.out.println(1);
    }  
}