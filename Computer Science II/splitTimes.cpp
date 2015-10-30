/*
  Programmer - Kyle Beadle
  Seventh Period          Computer Science II
  Assignment No. 7        Due Date : October 31, 2014
  
  Problem Statement - This program determines and prints the split times for
  5 kilometers.
  
  Description of Algorithm - This program begins by getting in the lap times for
  each lap. Then the program converts each into seconds and finds the split 
  times by finding the difference among the seconds. Then the program finds the
  average of the split times. Finally, it converts them all back into minutes,
  seconds, and tenths, and prints the results.
  
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const int SEC_PER_MINUTE = 60; //Seconds in a minute

void beginStatement();
void endStatement();
int getLapTime(int& min, int& sec, int lapNumber);
int convertToSeconds(int min, int sec);
int splitTimes(int sec1, int sec2);
void average(int num1, int num2, int num3, int num4, int num5);
void convertToMinutes(int sec,int lap);

int main(int argc, char *argv[])
{
    int min1,min2,min3,min4,min5;  //Minutes that the user enters
    int sec1,sec2,sec3,sec4,sec5;  //Seconds that the user enters
    
    //Prints the prompting message before input is allowed
    
    beginStatement();
    
    //Gets the time for each lap
    
    getLapTime(min1,sec1,1);
    getLapTime(min2,sec2,2);
    getLapTime(min3,sec3,3);
    getLapTime(min4,sec4,4);
    getLapTime(min5,sec5,5);
    
    //Converts the minutes and seconds to total seconds
    
    int sec = convertToSeconds(min1,sec1);
    int sec6 = convertToSeconds(min2,sec2);
    int sec7 = convertToSeconds(min3,sec3);
    int sec8 = convertToSeconds(min4,sec4);
    int sec9 = convertToSeconds(min5,sec5);
    
    //Finds the time that it took to complete each lap
    
    int split1 = splitTimes(sec,0);
    int split2 = splitTimes(sec6,sec);
    int split3 = splitTimes(sec7,sec6);
    int split4 = splitTimes(sec8,sec7);
    int split5 = splitTimes(sec9,sec8);
    
    //Prints the statement before the split times
    
    endStatement();
    
    //Converts the seconds to minutes and prints the split times
    
    convertToMinutes(split1,1);
    convertToMinutes(split2,2);
    convertToMinutes(split3,3);
    convertToMinutes(split4,4);
    convertToMinutes(split5,5);
    
    //Finds and prints the average lap time
    
    average(sec10,sec11,sec12,sec13,sec14);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

/**
   This function prints the beginning prompting statement for users.
*/

void beginStatement(){
     cout << "enter the elapsed times:" << endl;
}

/** 
    This function prints the end statement before printing the split times
*/

void endStatement(){
     cout << "split times:" << endl;
}

/**
   This function prints an output statement and gets the users' lap times.
   @param minutes - reference parameter that gets and sends amount of minutes
   @param seconds - reference parameter that gets and sends amount of seconds
   @param lapNumber - the number of the lap you are on
   @return the minutes and seconds of the lap
*/

int getLapTime(int& minutes, int& seconds, int lapNumber){
    cout << setw(15) << "kilometer " << lapNumber << "    ";
    cin >> minutes;
    cin.ignore(1,':');
    cin >> seconds;
}

/**
   This function converts the time to all seconds.
   @param min - minutes to be converted
   @param sec - seconds to be added to the minutes conversion
   @return the total ammount of seconds
*/

int convertToSeconds(int min, int sec){
    sec = (min * SEC_PER_MINUTE) + sec;
    return sec;
}

/**
   This function gets the split time between each lap.
   @param sec1 - Seconds of the first lap to be compared
   @param sec2 -  Seconds of the second lap to be compared
   @return the difference between the two laps
*/

int splitTimes(int sec1, int sec2){
    int large = max(sec1,sec2);
    int small = min(sec1,sec2);
    int difference = large - small;
    return difference;
}

/**
   This function finds the average of the split times and prints it.
   @param num1 - The number of seconds in the first lap.
   @param num2 - The number of seconds in the second lap.
   @param num3 - The number of seconds in the third lap.
   @param num4 - The number of seconds in the fourth lap.
   @param num5 - The number of seconds in the fifth lap.
*/

void average(int num1, int num2, int num3, int num4, int num5){
     double avg = (num1 + num2 + num3 + num4 + num5)/5.0;
     int minutes = int(avg / SEC_PER_MINUTE);
     double sec = avg-SEC_PER_MINUTE*minutes;
     cout << endl << "your average pace is " << minutes << ':';
     if (sec < 10 ){
       cout.fill('0');
       cout << fixed << showpoint << setprecision(1) << setw(4)<< sec;
       cout.fill(' ');
    }
    else{
         cout << sec;
    }
    cout << " per kilometer" << endl << endl;
}

/**
   This function converts the laps to minutes, seconds, and tenth, and prints it
   @param sec - number of seconds
   @param lap - lap number
*/

void convertToMinutes(int sec, int lap){
    int minutes = sec / SEC_PER_MINUTE;
    int seconds = sec % SEC_PER_MINUTE;
    cout << setw(15) << "kilometer " << lap << "    " << minutes << ":";
    if (sec <=9 ){
       cout.fill('0');
       cout << setw(2)<< seconds <<endl;
       cout.fill(' ');
    }
    else{
         cout << seconds <<endl;
    }
}
