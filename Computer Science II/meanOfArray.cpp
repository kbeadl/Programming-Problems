/*
Programmer - Kyle Beadle
Seventh Period          Computer Science II
Assignment No. 10       Due Date: February 3, 2015
           
Problem Statement - This program gets and prints pseudorandom numbers in an
array, the smallest data value, the largest data value, the arithmetic mean,
the geometric mean, and the standard deviation.

Description of Algorithm - This program begins by seeding random from a number
entered by the user. Then the program puts thirty eight pseudorandom into an
array. Next, the program finds the largest and smallest value in the data set.
Then, the program finds the arithmetic and geometric mean using the respective
formulas. Finally, the program find the standard deviation of the set using
the formula and prints all the numbers in the array and the data found
previously.
*/

#include <cstdlib>
#include <iostream>
#include <cmath>

const int ARRAY_NUM = 38;  //number of values in the array
const int UP = 200;        //highest number that random can give
const int LOW = 120;       //lowest number that random can give
const int PER_ROW = 7;     //number of values to be printed per line

using namespace std;

void loadArray(int data[]);
void printData(int data[],int small,int large,double average,double geometric,
double deviation);
int small(int data[]);
int large(int data[]);
double arithmetic(int data[]);
double geometric(int data[]);
double stdDeviation(int data[],double arverage);

int main(int argc, char *argv[])
{
    //Allows the user to enter the number that will seed random
    int userInput;
    cout << "Enter a number: ";
    cin >> userInput;
    srand(userInput);
    
    //Loads the array with the pseudorandom numbers
    int data[ARRAY_NUM];
    loadArray(data);
    
    //Calculates the smallest, largest, arithmetic mean, geometric mean, and 
    //standard deviation
    int smallest = small(data);
    int largest = large(data);
    double arithmeticMean = arithmetic(data);
    double geometricMean = geometric(data);
    double deviation =stdDeviation(data,arithmeticMean);
    
    //Prints the data
    printData(data,smallest,largest,arithmeticMean,geometricMean,deviation);
    system("PAUSE");
    return EXIT_SUCCESS;
}

/**
   This function loads data values into the array.
   @param data[] - the array that stores all the data
*/

void loadArray(int data[]){
     //fills the array with pseudorandom numbers
     for(int y=0;y<ARRAY_NUM;y++){
      int num = rand()%(UP-LOW+1)+LOW;
      data[y]=num;
     }
}

/**
   This function finds the smallest value in the array.
   @param data[] - the array that stores all the data
   @return the smallest value in the array
*/

int small(int data[]){
     int smallest = data[0];
     //goes through each data in the array and finds the smallest number
     for(int z=1;z<ARRAY_NUM;z++){
      if(data[z] <=smallest)
      smallest = data[z];
     }
     return smallest;
}

/**
   This function finds the largest value in the array.
   @param data[] - the array that stores all the data
   @return the largest value in the array
*/

int large(int data[]){
     int largest = data[0];
     //goes through each data in the array and finds the largest number
     for(int z=1;z<ARRAY_NUM;z++){
      if(data[z] >= largest)
      largest = data[z];
     }
     return largest;
}

/**
   This function finds the arithmetic mean.
   @param data[] - the array that stores all the data
   @return the arithmetic mean
*/

double arithmetic(int data[]){
       int sum=0;
       //goes through each data value and adds them together
       for(int x = 0; x<ARRAY_NUM;x++)
               sum+=data[x];
       double total = sum/(ARRAY_NUM*1.0);
       return round(total*1000)/1000;
}

/**
   This function finds the geometric mean.
   @param data[] - the array that stores all the data
   @return the geometric mean
*/

double geometric(int data[]){
       double sum=1;
       for(int x = 0; x<ARRAY_NUM;x++){
       sum*=pow(data[x],1/(ARRAY_NUM*1.0));}
       return round(sum*1000)/1000;
}

/**
   This function finds the standard deviation.
   @param data[] - the array that stores all the data
   @param average - the arithmetic mean
   @return the standard deviation
*/

double stdDeviation(int data[],double average){
       double sum=0;
       for(int x = 0; x<ARRAY_NUM;x++){
       sum+=pow(data[x]-average,2);}
       double total = pow(sum/ARRAY_NUM,1/2.0);
       return round(total*1000)/1000;
}

/**
   This program prints the data previously calculated.
   @param data[] - the array that stores all the data
   @param small - the smallest value in the array
   @param large - the largest value in the array
   @param average - the arithmetic mean
   @param geometric - the geometric mean of the value in the array
   @param deviation - the standard deviation of the values in the array
*/

void printData(int data[],int small,int large,double average,double geometric,
double deviation){
       cout << endl;
       //Prints the data values in rows of seven
       for(int x = 0; x<ARRAY_NUM;x++){
               if ((x+1)%PER_ROW==0){
                  cout << data[x] << endl;}
               else cout << data[x] << " ";
       }
       //prints the data
       cout << endl << endl << "the smallest value is " << small << endl;
       cout << "the largest value is " << large << endl;
       cout << "the arithmetic mean is " << average << endl;
       cout << "the geometric mean is " << geometric << endl;
       cout << "the standard deviation is " << deviation << endl<<endl;
}
