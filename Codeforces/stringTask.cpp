/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/118/A
  Problem 118A - String Task
*/

#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdio>
#include <cstring>

int main(int argc, const char * argv[]) {
    char letters[100];  //Creates an array of chars to store a c styled string
    scanf("%[^\t\n]s",letters);  //Takes in the word in the form of a c string
    //Makes each letter of the word lowercase
    for (int x = 0; x < strlen(letters); x++) letters[x] = tolower(letters[x]);
    //Checking to see if a letter in the word is a vowel
    for (int x = 0; x < strlen(letters); x++)
    {
        //Removes vowels if they are present
        if (letters[x]=='a'||letters[x]=='e'||letters[x]=='i'||letters[x]=='o'
        ||letters[x]=='u'||letters[x]=='y')
        {
            printf("");
        }
        //Prints all consonants with a period in front of them
        else printf(".%c",letters[x]);
    }
    return 0;
}

