/*
Programmer - Kyle Beadle
Seventh Period          Computer Science II
Assignment No. 2        Due Date: September 9, 2014

Problem Statement - Finds the heat index using the temperature in farenheit and
relative humidity through user input.

Description of Algorithm - First, get the temperature in farenheit and relative
humidity. Next, calculate the heat index by plugging in the temperature and
relative humidity into the heat index formula. Finally, output the heat index to
the user.
*/

#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

const char DEGREE_SYMBOL = 167; //degree symbol in Lucida Console

int main(int argc, char *argv[])
{
    double temperatureInFarenheit, relativeHumidity;
    
    //takes in the temperature in farenheit from the keyboard
    cout << "Enter the temperature in " << DEGREE_SYMBOL << "F ";
    cin >> temperatureInFarenheit;
    
    //takes in the relative humidity from the keyboard
    cout << "Enter the relative humidity ";
    cin >> relativeHumidity;
    
    //calculates the heat index using the heat index formula
    double heatIndex = -42.379+2.04901523*temperatureInFarenheit+
    10.14333127*relativeHumidity-0.22475541*temperatureInFarenheit*
    relativeHumidity-6.83783*pow(10,-3)*pow(temperatureInFarenheit,2)-
    5.481717*pow(10,-2)*pow(relativeHumidity,2)+1.22874*pow(10,-3)*
    pow(temperatureInFarenheit,2)*relativeHumidity+8.5282*pow(10,-4)*
    temperatureInFarenheit*pow(relativeHumidity,2)-1.99*pow(10,-6)*
    pow(temperatureInFarenheit,2)* pow(relativeHumidity,2);
    
    //outputs the heat index rounded off the the nearest whole number
    cout << endl;
    cout << "The Heat Index is " << round(heatIndex) << DEGREE_SYMBOL << "F" 
    << endl;
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
