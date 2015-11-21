/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/460/A
  Problem 460A - Vasya and Socks
  Written: November 17, 2015
*/
import java.util.*;

public class VasyaAndSocks {

    public static void main(String[] args) {
        int n,m,day=0;
        Scanner scan=new Scanner(System.in);  //allows for user input
        n=scan.nextInt();  //initial number of socks
        m=scan.nextInt();  //m-th day that the socks will be replenished
        //While you still have socks
        while(n!=0)
        {
            n--;  //you trash a pair of socks
            day++;  //the next day
            //If the day is when the socks are replenished
            if(day%m==0)
            {
                n++; //You get one more pair of socks
            }
        }
        System.out.println(day);  //Output days it took to lose all socks
    }
    
}
