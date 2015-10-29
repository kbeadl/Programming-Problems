/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/158/A
  Problem 158A - Next Round
*/

#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int k,n; //k - number of contestants | n - score cutoff
    scanf("%d %d",&k,&n);  //takes in the values of k and n
    int scores[k];  //creates an array the size of the number of contestants
    int data;  //number that will be put into the array
    int pass=0;  //Number of people who will advance to the next round
    
    //Fills the array with data entered
    for (int x=1;x<=k;x++)
    {
        scanf("%d", &data);
        scores[x]=data;  //fills array at position x with the inputed number
    }
    
    int score = scores[n];  //Score at the nth place
    
    //Goes through each value in the array and analyzes it
    for (int y=1;y<=k;y++)
    {
        //Checks to see if a score is greater or equal to the nth place
        //as well as if the score is positive.
        if(scores[y] >= score && scores[y]>0)
        {
            pass++;
        }
    }
    
    //Outputs data
    printf ("%d", pass);
    return 0;
}
