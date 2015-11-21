/*
    Programmer: Kyle Beadle
    Codeforces Link: http://codeforces.com/problemset/problem/136/A
    Problem 136A - Presents
    Written: November 12, 2015
*/
import java.util.*;

public class Presents {
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in); //allows for user input
        int people = scan.nextInt();  //takes in the amount of people present
        int[] gifts = new int[people];  //array of gifts given
        int[] recieved = new int[people];  //array of gifts recieved
        //Fills the array with user input
        for(int x=0;x<gifts.length;x++)
            gifts[x]=scan.nextInt();
        //Puts the people who recieved gifts in the recieved array
        for(int x=0;x<gifts.length;x++)
        {
            int spot = gifts[x]-1;
            recieved[spot]=x+1;
        }
        //Outputs the person who gave them a gift
        for(int x=0;x<recieved.length;x++)
        {
            System.out.print(recieved[x]+" ");
        }
        
    }
    
}
