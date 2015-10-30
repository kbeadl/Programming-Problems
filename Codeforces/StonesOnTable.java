/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/266/A
  Problem 266A - Stones on the Table
  Written: October 30, 2015
*/
import java.util.*;

public class StonesOnTable {
    public static void main(String[] args) {
        Scanner scan = new Scanner (System.in);  //Allows for user input
        int numberOfStones = scan.nextInt();  //Takes in the number of stones
        String colors = scan.next();  //Takes in the colors of the stones
        int similar = 0;  //Counter to see if similar colored stones are
                          //adjacent
        //Goes through the color of each stone
        for (int x=0; x<numberOfStones-1;x++)
        {
            //If two adajcent stones have the same color, add 1 to similar
            if(colors.substring(x, x+1).equals(colors.substring(x+1, x+2)))
                similar++;
        }
        System.out.println(similar);  //Outputs the number of similar adjacent 
                                      //stones
    }
    
}
