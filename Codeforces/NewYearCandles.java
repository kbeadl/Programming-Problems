/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/379/A
  Problem 379 - New Years' Candles
  Written: November 17, 2015
*/
import java.util.*;

public class NewYearCandles {

    public static void main(String[] args) {
        int n,m,hour=0;
        Scanner scan=new Scanner(System.in);  //allows for user input
        n=scan.nextInt();  //initial number of candles
        m=scan.nextInt();  //m-th candle that he can make another candle
        //While you still have a candle
        while(n!=0)
        {
            n--;  //melt a candle
            hour++;  //the next hour
            //If the hour is when a candle can be created
            if(hour%m==0)
            {
                n++; //You get one candle
            }
        }
        System.out.println(hour);  //Output hours it took to burn all candles
    }
    
}
