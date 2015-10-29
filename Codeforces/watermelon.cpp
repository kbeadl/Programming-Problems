/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/4/A
  Problem 4A - Watermelon
*/
#include <cstdio>

using namespace std;

int main ()
{
    int parts;  //number that the watermelon will be split into

    scanf ("%d", &parts); //Allows users to insert spilt #

    //Checks to see if the watermelon can be divided into the
    //parts evenly
    if (parts <= 2) printf( "NO");
    else if (parts % 2 == 0) printf( "YES");
    else printf( "NO");

    return 0;
}
