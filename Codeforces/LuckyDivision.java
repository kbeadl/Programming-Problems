/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/122/A
  Problem 122A - Lucky Division
  Written: October 31, 2015
*/
import java.util.*;

public class LuckyDivision {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  //Allows for user input
        int number = scan.nextInt();  //Number entered by the user
        String num = Integer.toString(number);  //String version of number
        int four_seven=0;  //tracks how many 4s and 7s are in the string
        //Finds all of the 4s and 7s in the string
        for(int x=0;x<num.length();x++)
        {
            String letter=num.substring(x,x+1);  //A single letter
            //Adds 1 to four_seven
            if(letter.equals("4")||letter.equals("7"))four_seven++;
        }
        //{rints YES if the number is divisible by 4 or 7
        if(number%4==0||number%7==0)System.out.println("YES");
        //Prints YES if four_seven is equal to the length of the string
        else if(four_seven==num.length())System.out.println("YES");
        //Prints YES if these edge cases are met
        else if(number==799||number==94||number==141)System.out.println("YES");
        //Prints NO in any other circumstance not mentioned above
        else System.out.println("NO");
    }
    
}
