/*
Programmer - Kyle Beadle
Seventh Period          Computer Science II
Assignment No. 3        Due Date: September 17, 2014

Problem Statement - Finds the differnce of wind chill index by finding the
orginal formula and the new formula.

Description of Algorithm - Firstly, get the temperature and wind speed from the 
user. Then calculate the wind chill index by using the first formula provided. 
Then use the second formula provided to find the second wind chill index. Then
find the minimum and maximum values to be used to find the difference. Finally,
find the difference of the two values and output the two versions of the wind
chill index and the difference.

*/

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    double temperature, windSpeed, maxWindChill, minWindChill;
    
    //Allows the user to enter the temparature
    cout << "Enter the temperature ";
    cin >> temperature;
    
    //Allows the user to enter the wind speed
    cout << "Enter the wind speed ";
    cin >> windSpeed;
    cout << endl;
    
    //Finds the wind chill index using the original formula
    double firstWindChill = 0.08173 * (3.71 * sqrt(abs(windSpeed + 
    (5.81-0.25*windSpeed) * (temperature-91.4)+91.4)));
    
    //Finds the wind chill index using the second formula
    double secondWindChill = 35.74 + (0.6215 * temperature) - 
    (35.75*pow(windSpeed,0.16)) + (0.4275*temperature*pow(windSpeed,0.16));

    //Finds the min and max of the two values
    maxWindChill = max(firstWindChill, secondWindChill);
    minWindChill = min(firstWindChill, secondWindChill);
    
    //Finds the difffernce of the two values
    double differenceOfCalculations = maxWindChill-minWindChill;
    
    //Outputs the value of the first formula to the user
    cout << "The wind chill index with the old formula (before 2002) is " <<
    firstWindChill << endl;;
    
    //Outputs the value of the second formula to the user
    cout << "The wind chill index with the new formula is " << secondWindChill
    << endl <<endl;
    
    //Outputs the difference of the two values to the user
    cout << "The difference between the two calculations is " 
    << differenceOfCalculations << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
