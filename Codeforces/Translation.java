/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/41/A
  Problem 41A - Translate
  Written: November 17, 2015
*/
import java.util.*;

public class Translation {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  //allows for user input
        String word1 = scan.next();  //first word entered
        String word2 = scan.next();  //second word entered
        StringBuffer buffer = new StringBuffer(word2);  //allows for reverse
        buffer.reverse();  //reverses string
        String palindrome= buffer.toString();  //turns reverse into a string
        //Ouputs YES if the second word is a palindrome of the first word
        if(word1.equals(palindrome)) System.out.println("YES");
        //Outputs NO if the second word is not a palindrome of the first word
        else System.out.println("NO");
    }
    
}
