/*
Programmer - Kyle Beadle
Seventh Period          Computer Science II
Assignment No. 12       Due Date: February 27, 2015

Problem Statement - This program gets data from a file and outputs it in
different ways.

Description of Algorithm - This program begins by opening a file and loading
each number in the file into an array. The program then prints all the numbers
in the order they are in the array five per line. Then, the program prints the
data in reverse six values per line. Thirdly, the program prints the even data
values seven per line. Then the program prints the odd numbers in rows of eight.
Finally, this program prints all of the prime numbers in the file seven per
line.
*/

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

const int MAX_SIZE = 100;

int loadArray(int array[], ifstream& data);
void printForward(int array[], int counter);
void printReverse(int array[], int counter);
void printEven(int array[], int counter);
void printOdd(int array[], int counter);
void printPrime(int array[], int counter);

int main(int argc, char *argv[])
{
    int array[MAX_SIZE];  //declaring an array with a max of 100
    
    //Declaring the file stream and opening the data file
    ifstream data;
    data.open("S:\Computer Science II/11data.txt");
    
    //Loads the array and counts the number of values in it
    int counter = loadArray(array,data);
    
    //Prints the file values forward
    cout << "All the values printed forward"<<endl;
    printForward(array,counter);
    cout << endl << endl;
    
    //Prints the file values backward
    cout << "All the values printed backward"<<endl;
    printReverse(array,counter);
    cout << endl << endl;
    
    //Prints the even data values
    cout << "All the even values:"<<endl;
    printEven(array,counter);
    cout << endl << endl;
    
    //Prints the odd data values
    cout << "All the odd values:"<<endl;
    printOdd(array,counter);
    cout << endl << endl;
    
    //Prints the prime data values
    cout << "All prime the values:"<<endl;
    printPrime(array,counter);
    
    cout << endl<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

/**
   This program loads the array with data from the file and counts the amount of
   values.
   @param array - the array that will store the data
   @param data - the file that holds all the data
   @return the number of values in the array
*/

int loadArray(int array[], ifstream& data)
{
     int counter=0;
     while (!data.eof())
     {
           int num;
           data >> num;
           array[counter]=num;
           counter++;
     }
     return counter-1;
}

/**
   This program prints the data in the file forward.
   @param array - the array that stores all the data
   @param counter - number of values in the array
*/

void printForward(int array[], int counter)
{
     for (int x=0; x<counter;x++)
     {   
         //Five per line
         if ((x+1)%5==0)
         {
         cout << array[x] << endl;
         }
         else cout << array[x] <<" ";
     }
}

/**
   This program prints the data in the file in reverse.
   @param array - the array that stores all the data
   @param counter - number of values in the array
*/

void printReverse(int array[], int counter)
{
     int count = 1;
     for (int x=counter-1; x>=0;x--)
     { 
         cout << array[x]  << " ";
         //Six per line
         if(count%6 ==0)
         {
          cout<<endl;
         }
         count++;
         
     }
}

/**
   This program prints all the even data values in the file.
   @param array - the array that stores all the data
   @param counter - number of values in the array
*/

void printEven(int array[], int counter)
{
     int count = 1;
     for (int x=0; x<counter;x++)
     {   
         if(array[x]%2==0)
         {
         cout <<array[x]<<" ";
         //Seven per line
         if(count%7 ==0)
         {
          cout<<endl;
         }
         count++;
         }
     }
}

/**
   This program prints all the odd data values in the file.
   @param array - the array that stores all the data
   @param counter - number of values in the array
*/

void printOdd(int array[], int counter)
{
     int count = 1;
     for (int x=0; x<counter;x++)
     {   
         if(array[x]%2!=0)
         {
         cout <<array[x]<<" ";
         //Eight per line
         if(count%8 ==0)
         {
          cout<<endl;
         }
         count++;
         }
     }
}

/**
   This program prints all the prime numbers in the file.
   @param array - the array that stores all the data
   @param counter - number of values in the array
*/

void printPrime(int array[], int counter)
{
     int count = 1;
     for (int x=0;x<counter;x++)
     {
         if(array[x]>0) 
         {
        int square = floor(pow(array[x],0.5));
        bool prime = true;
        for(int w=2;w<=square;w++)
        {
                if (array[x]%w==0) prime =false;                  
        }
        //Checks if the number is prime and prints it
        if (prime==true){
           cout<<array[x]<<" ";
           if (count%7==0)cout<<endl;
        count ++;}
        }
     }
     
}
