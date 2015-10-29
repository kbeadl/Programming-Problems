/*
  Programmer: Kyle Beadle
  Codeforces Link: http://codeforces.com/problemset/problem/71/A
  Problem 71A - Way Too Long Words
*/
#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[])
{
    int words;  //# of words that will be entered by the user

    scanf ("%d", &words);  //Allows # of words to be entered

    char word [100 + 10];  //array of chars for c styled strings

    //Tests words number of words
    while ( words-- )
    {
        scanf ("%s", word);  //Allows user to enter a word

        int length = (int) strlen (word);  //gets length of a word
        //Checks to see if a word is longer that 10 characters
        if (length > 10)
        {
            //Prints the first and last letter of the word
            //and the number of characters in between
            printf ("%c%d%c\n", word [0], length - 2, word [length - 1]);
        }
        //Prints the word if the word is less than 10 characters
        else
        {
          printf ("%s\n", word);
        }

    }

    return 0;
}
