/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/96/A
  Problem 96A - Football
*/
import java.util.*;

public class Football {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);  //Allows for user input
        String team = scan.next();  //Takes in number of players on field
        int length = team.length();  //Length of the team string
        String safety = "NO";  //Default value for if the field is safe or not
        //Goes through each player and finds if the field is safe
        for (int x=0;x<length-7;x++)
        {
            //If there are seven players in a row on the field it is safe
            if (team.substring(x,x+7).equals("0000000")||
                    team.substring(x,x+7).equals("1111111"))
                safety = "YES";
            //Safe if the players have a 10000000 formation
            if(team.substring(x).equals("10000000"))safety = "YES";
            //Safe if the players have a 01111111 formation
            if(team.substring(x).equals("01111111"))safety = "YES";
        }
        System.out.println(safety); //Outputs the state of safety on field
    }
    
}
