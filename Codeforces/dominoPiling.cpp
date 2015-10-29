/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/50/A
  Problem 50A - Domino piling
*/

#include <cstdio>


int main(int argc, const char * argv[]) {
    int n,m;  //n - the length of the board | m - the height of the board
    
    scanf ("%d %d", &n,&m);  //Takes in n and m from user input
    
    int area = n * m;  //Finds the area of the board by multiplying n and m
    int dominoes = area/2;  //Number of dominoes needed to cover the board
    
    printf("%d",dominoes);  //Outputs the number of dominoes
    
    return 0;
}
