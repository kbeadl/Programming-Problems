/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/58/A
  Problem 58A - Chat room
  Written: October 31, 2015
*/
import java.util.*;

public class ChatRoom {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);  //Allows for user input
        String word, form, answer;
        int i, j;
  
        form = "hello";  //the string that needs to be constructed
        //Finds whether the string will form hello
        while( scanner.hasNext() )
        {
            word = scanner.next();  //takes in the string
            answer = "NO";
            //Goes through each letter to see if it can be removed
            for(j = i = 0; i<word.length(); i++)
            {
                //Checks to see if two characters are the same
                if( word.charAt(i) == form.charAt(j) )
                {
                    //If j is 5 output yes and break to output
                    if( ++j == 5 )
                    {
                        answer = "YES";
                        break;
                    }
                }
            }
            System.out.println(answer);  //Outputting if hello can be formed
        }
    }
    
}
