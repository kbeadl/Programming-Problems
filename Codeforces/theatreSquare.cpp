/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/1/A
  Problem 1A - Theatre Square
*/
#include <cstdio>
#include <cmath>

using namespace std;

int main ()
{
    int n;  //width of the city square
    int m;  //length of the city square
    int a;  //length and width of the flagstone

    scanf ("%d %d %d", &n, &m, &a); //Allows the user to enter
                                    //the city square and flagstone
                                    //data
    //Prints how many flagstones are neccessary to fill the sqaure
    printf ("%0.lf\n", ceil(n / (double) a) * ceil (m / (double) a));

    return 0;
}
