/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/231/A
  Problem 231A - Team
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, const char * argv[]) {
    int numOfProblems;  //number of problems in the competition
    scanf("%d", &numOfProblems);  //takes in the number of problems from user
    int petya = 0;  //state of whether petya can solve the problem
    int vasya = 0;  //state of whether vasya can solve the problem
    int tonya = 0;  //state of whether tonya can solve the problem
    int problemsSolved =0;  //total number of problems that can be solved
    //Goes through each problem to see if two of them can complete it
    for (int x=0;x<numOfProblems;x++)
    {
        scanf("%d", &petya);  //Takes in if petya can solve the problem
        scanf("%d", &vasya);  //Takes in if vasya can solve the problem
        scanf("%d", &tonya);  //Takes in if tonya can solve the problem
        //Adds 1 to the solved problems if two of them know how to solve it
        if((petya==1&&vasya==1)||(petya==1&&tonya==1)||(tonya==1&&vasya==1)) 
             problemsSolved++;
    }
    printf("%d", problemsSolved);  //Ouputs the total number of problems solved
    return 0;
}
