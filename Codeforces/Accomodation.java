/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/467/A
  Problem 467A - George and Accomodation
  Written: November 6, 2015
*/
import java.util.*;

public class Accomodation {
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  //allows for user input
        int rooms = scan.nextInt();  //takes in the number of rooms available
        int total=0;  //rooms that Alex and George can stay in
        //Checks to see if Alex and George can stay in the room
        for (int x=0;x<rooms;x++)
        {
            int living = scan.nextInt();  //People currently in the room
            int capacity = scan.nextInt();  //Capacity of the room
            //Adds to total if Alex and George can stay in the room
            if(living<=capacity-2)total++;
        }
        System.out.println(total);  //Outputs the amount of rooms they can stay
                                    //in
    }
    
}
