/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/546/A
  Problem 546A - Soldier and Bananas
  Written: January 27, 2016
*/
import java.io.*;
import java.util.*;

public class SoldierAndBananas {
    public static void main(String[] args) {
        //Allows for data input
        Scanner scan = new Scanner(System.in);
        //Gets the input
        int cost = scan.nextInt();
        int initialM = scan.nextInt();
        int bananas = scan.nextInt();
        int counter =1;
        int total=0;
        while(counter<bananas+1)
        {
            total+=(counter*cost);
            counter++;
        }
        cost = total-initialM;
        if(cost<=0) cost =0;
        System.out.println(cost);
    }

}
