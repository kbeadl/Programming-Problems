/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/281/A
  Problem 281A - Word Capitalization
  Written: October 31, 2015
*/
import java.util.*;

public class WordCap {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  //Allows for user input
        String word = scan.next();  //word that will be capitalized
        //Checks to see if a word is only one character long
        if(word.length()==1)
        {
            String upper = word.toUpperCase();  //Makes the first letter caps
            System.out.println(upper);  //Outputs the capitalized word
        }
        //Capitaizes word if it is longer than 1 character
        else
        {
            //Capitalizes the first letter of the word
            String firstLetter = word.substring(0, 1).toUpperCase();
            //Keeps the rest of the word seperate
            String restWord = word.substring(1);
            //Outputs the capitalized word
            System.out.println(firstLetter+restWord);
        }
    }
    
}
