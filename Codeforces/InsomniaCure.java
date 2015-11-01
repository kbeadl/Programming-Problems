/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/148/A
  Problem 148A - Insomnia Cure
  Written: October 31, 2015
*/
import java.util.*;

public class InsomniaCure {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  //Allows for user input
        int k = scan.nextInt();  //punched in the face with a frying pan
        int l = scan.nextInt();  //tail shut into the balcony door
        int m = scan.nextInt();  //paws trampled with sharp heels
        int n = scan.nextInt();  //threatened to call mom
        int d = scan.nextInt();  //amount of dragons
        int total = 0;           //Total dragons beaten
        //Finds the number of dragons beaten physically
        for(int x=1;x<=d;x++)  
        {  
            //If x is divisible by one of the variables, add 1 to beaten dragons
            if(x%k==0||x%l==0||x%m==0||x%n==0)  
                total++;  //adds 1 to total
        }   
        System.out.println(total);  //Outputs the amount of dragons beaten
    }
    
}