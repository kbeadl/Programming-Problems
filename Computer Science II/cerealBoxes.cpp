/*
  Programmer - Kyle Beadle
  Seventh Period           Computer Science II
  Assignment No. 11        Due Date : 2/11/15
  
  Problem Statement - This program simulates the chances of collecting six
  figures from a box of cereal.
  
  Description of Algorithm - First, this program gets the figure randomly and 
  adds one to its corresponding location in an array. Then, once all the figures
  are found, the program prints the amount of each figure aquired and the total
  amount of boxes it took. Finally, after the simulation has been repeated 20
  times, the program finds and prints the smallest and largest number of boxes, 
  and the avergage amount of boxes. 
*/

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

const int ARRAY_SIZE = 6;  //Size of the arrays that hold figures
const int UP = 5;          //Largest value in range
const int LOW = 0;         //Smalles value in range
const int SIM_AMOUNT = 20; //Amount of simulations performed

int simulation();
void printSim(int num[]);
double arithmetic(int data[]);
int large(int data[]);
int small(int data[]);
void printData(int smallest,int largest,double average);

int main(int argc, char *argv[])
{
    int boxAmount[SIM_AMOUNT];          //Hols the amount of boxes from each sim
    //Performs a simulation 20 times and gets the box amount from the sim
    for (int x = 0; x<SIM_AMOUNT;x++)
{
        int box = simulation();
        boxAmount[x]=box;
}
    int smallest = small(boxAmount);   //Smallest amount of boxes from all sims
    int largest = large(boxAmount);    //Largest amount of boxes from all sims
    double average = arithmetic(boxAmount);  //Average of all the boxes
    printData(smallest,largest,average);     //Prints out the data
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

/**
   This function finds a figure while any figure place has 0 figures aquired.
   @return total - total number of boxes aquired
*/

int simulation()
{
    int numOfFigures[ARRAY_SIZE]={0,0,0,0,0,0};
    int total=0;
    while (numOfFigures[0]==0||numOfFigures[1]==0||numOfFigures[2]==0
    ||numOfFigures[3]==0||numOfFigures[4]==0||numOfFigures[5]==0)
    {
     int place = rand()%(UP-LOW+1)+LOW;
     if (place==0)numOfFigures[place]++;
     if (place==1)numOfFigures[place]++;
     if (place==2)numOfFigures[place]++;
     if (place==3)numOfFigures[place]++;
     if (place==4)numOfFigures[place]++;
     if (place==5)numOfFigures[place]++;
     total++;
    }
    printSim(numOfFigures);
    cout << "Total Boxes: " << total<<endl<<endl;
    return total;
    
}

/**
   This function prints out the number of each figure aquired.
   @param num - array that stores the amount of each figure
*/

void printSim(int num[]){
     string figures[ARRAY_SIZE]= {"Beet Farmer","Bark Harvester",
     "Turnip Puller","Sugar Kettle Tender","Box Filler","Payroll Guard"};
     cout << num[0] << " "<<":"<<" "<<figures[0]<<endl;
     cout << num[1] << " "<<":"<<" "<<figures[1]<<endl;
     cout << num[2] << " "<<":"<<" "<<figures[2]<<endl;
     cout << num[3] << " "<<":"<<" "<<figures[3]<<endl;
     cout << num[4] << " "<<":"<<" "<<figures[4]<<endl;
     cout << num[5] << " "<<":"<<" "<<figures[5]<<endl<<endl;
}

/**
   This function finds the smallest value in the array.
   @param data[] - the array that stores all the data
   @return the smallest value in the array
*/

int small(int data[]){
     int smallest = data[0];
     //goes through each data in the array and finds the smallest number
     for(int z=0;z<SIM_AMOUNT;z++){
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
     for(int z=0;z<SIM_AMOUNT;z++){
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
       for(int x = 0; x<SIM_AMOUNT;x++)
               sum+=data[x];
       double total = sum/(SIM_AMOUNT*1.0);
       return round(total);
}

/**
   This function prints the smallest and largest number, as well as the average.
   @param smallest - smallest amount of boxes
   @param largest - largest amount of boxes
   @param average - average amount of boxes
*/

void printData(int smallest,int largest,double average)
{
     cout << "The Smallest Amount of Boxes found is " << smallest<<endl;
     cout << "The Largest Amount of Boxes found is " << largest<<endl;
     cout << "The Average Amount of Boxes Per Sim is " << average<<endl<<endl;
}
