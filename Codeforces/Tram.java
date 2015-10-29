/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/116/A
  Problem 116A - Tram
*/
import java.util.*;

public class Tram {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  //Allows for input
        int stops = scan.nextInt();  //User inputted # of tram stops
        int total=0;  //total of people in the tram
        int capacity = 0;  //capacity of the tram
        //Goes through each stop having people exit and enter
        for(int x=0;x<stops;x++)
        {
            int exit = scan.nextInt();  //# of people that exit
            total-=exit;  //subtracts the #exited from total
            int enter = scan.nextInt(); //# of people that enter
            total+=enter; //adds the #entered to total
            //Sets capacity to total if total is larger than the current
            //capacity
            if (total > capacity) capacity=total;
        }
        System.out.println(capacity);  //Outputs the capacity of the tram
    }
}
