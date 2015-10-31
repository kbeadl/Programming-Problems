/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/236/A
  Problem 236A - Boy or Girl
  Written: October 31, 2015
*/
import java.util.*;

public class BoyOrGirl {
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);  //Allows for user input
        HashSet<String> letters = new HashSet<String>(100);  //Doesn't allow
                                                             //for duplicated
                                                             //characters
        String word = scan.nextLine();  //User inputted word
        //Puts the letters into the HashSet
	for(int i = 0; i < word.length(); i++)
        {
            letters.add(word.substring(i, i+1));
        }
        //Ouputs CHAT WITH HER! if the HashSet has an even number of entries
        if(letters.size()%2==0) System.out.println("CHAT WITH HER!");
        //Outputs IGNORE HIM! if the HashSet has an odd number of entries
        else System.out.println("IGNORE HIM!");
    }
    
}
