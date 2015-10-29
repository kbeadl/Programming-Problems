/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/131/A
  Problem 131A - cAPS lOCK
*/
import java.util.*;

public class CapsLock {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  //Allows for user input
        String word = scan.next();  //store the word that is entered by the user
        String firstLetter = word.substring(0,1); //Gets the first letter in
                                                  //the word
        String upperCase = word.toUpperCase();  //Puts the word into all caps
        String end=word;  //assigns the word to the user output
        int lowerCase = 0;  //Counts the number of letters that are lowercase
        //Checks to see if the word is in all uppercase or not
        if (word.equals(upperCase))
        {
            //Creates a string with the whole word in lowercase
            end =firstLetter.toLowerCase()+word.substring(1).toLowerCase();
        }
        else
        {
            //Goes through each letter to see if it is lowercase
            for (int x=0;x<word.length();x++)
            {
                //If a letter is lowercase, lowerCase++ adds 1 to the lowercase
                //counter
                if (word.substring(x,x+1).equals(word.substring(x,x+1).toLowerCase())){
                    lowerCase++;
                }
            }
            //Checks to see if the word is only one letter, and if it is lowerc
            if (word.length()==1&&firstLetter.equals(firstLetter.toLowerCase())) 
                end =firstLetter.toUpperCase();  //Makes the letter uppercase
            //Checks to see if the lowerCase counter is 1 and the first letter
            //is lowercase
            if (lowerCase==1&&firstLetter.equals(firstLetter.toLowerCase())){
                //Makes the first letter of the word uppercase and the rest of
                //the word lowercase
                end =firstLetter.toUpperCase()+word.substring(1).toLowerCase();
            }
        }
        System.out.println(end);  //Outputs the final string
    }
    
}
