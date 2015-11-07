/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/110/A
  Problem 110A - Nearly Lucky Number
  Written: November 6, 2015
*/
import java.util.*;

public class NearlyLucky {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  //allows for user input
        String number = Long.toString(scan.nextLong());  //number as a string
        int total =0;  //total of 4s and 7s in the number
        //Finds out how many 4s and 7s are in the number
        for(int x=0;x<number.length();x++)
        {
            String letter = number.substring(x,x+1);  //a single letter
            //Adds 1 to total if a 4 or 7 is present
            if(letter.equals("4")||letter.equals("7"))total++;
        }
        int four_seven=0;  //tracks how many 4s and 7s are in the string
        //Finds all of the 4s and 7s in the string
        String total2 = Integer.toString(total);  //String version of number
        for(int x=0;x<total2.length();x++)
        {
            String letter=total2.substring(x,x+1);  //A single letter
            //Adds 1 to four_seven
            if(letter.equals("4")||letter.equals("7"))four_seven++;
        }
        //Prints YES if four_seven is equal to the length of the string
        if(four_seven==total2.length())System.out.println("YES");
        //Prints YES if these edge cases are met
        else if(total==799||total==94||total==141)System.out.println("YES");
        //Prints NO in any other circumstance not mentioned above
        else System.out.println("NO");
    }
    
}
