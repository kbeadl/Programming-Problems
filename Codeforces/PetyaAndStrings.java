/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/112/A
  Problem 112A - Petya and Strings
*/
import java.util.*;

public class PetyaAndStrings {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in); //Allows for user input
        String word1 = scan.next();  //Takes in the first word
        String word2 = scan.next();  //Takes in the second word
        word1 = word1.toLowerCase();  //Makes the first word lowercase
        word2 = word2.toLowerCase();  //Makes the second word lowercase
        //Outputs 0 if the two words are equal
        if (word1.equals(word2)) System.out.println(0);
        //Outputs 1 if the first word is greater lexographically to the second
        else if(word1.compareTo(word2)>0) System.out.println(1);
        //Outputs -1 if the second word is greater lexographically to the first
        else System.out.println(-1);
    }
    
}
