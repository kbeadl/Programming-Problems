/*
Programmer - Kyle Beadle
Seventh Period          Computer Science II
Assignment No. 1        Due Date: September 2, 2014

Problem Statement - The program tells the user the amount of water needed to 
irrigate a field in cubic feet and gallon, as well as the cost of the water
after the user inputs the amount of water quivalent in inches of rain and the
area of the feild in acres.

Decription of Algorithm - First you get the area of the field in acres and the
amount of water equivalent in inches of rain. Then you get the cost of the water
in dollars per 100 cubic feet. Then to get acres to square feet you multiply the
area of the field in acres by the number of square feet in an acre. You then
find the cubic feet of water by multiplying acres in square feet by water
equvalent in inches of rain divided by inches per foot and multiply all of that
by the amount of evaporation. To get the correct amount of gallons you divide
cubic feet of water by cubic feet in a gallon. Finally, to get the cost of the
water needed, multiply the cubic feet of water by the cost of the water, and 
divide it by one hundred.
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

const double EVAPORATION_DURING_IRRIGATION = .15;
const double CUBIC_FT_PER_GALLON = 0.13368056;
const double SQ_FT_IN_ACRE = 43560.0;
const double INCHES_IN_FOOT = 12.0;

int main(int argc, char *argv[])
{
    double areaOfFieldInAcres, waterInEquivalentInchesOfRain, costOfWater;
    
    /* Takes in the area of field in acres from the keyboard */
    cout << "Enter the area of your field in acres. ";
    cin >> areaOfFieldInAcres;
    
    /* Takes in the water equivalent in inches of rain from the keyboard*/
    cout << "Enter the amount of water you need in equivalent inches of rain. ";
    cin >> waterInEquivalentInchesOfRain;
    
    /*Take in the cost of water from the keyboard */
    cout << "What is the cost of water in dollars per 100 cubic feet $";
    cin >> costOfWater; // Cost of water per 100 cubic feet
    
    /* Does the math that is needed to find the cubic feet of water needed,
    gallons needed, and cost of water */
    double totalSqFt = areaOfFieldInAcres * SQ_FT_IN_ACRE;  /* Area in sq feet
                                                        from the user's input */
    double cubicFeetOfWater = totalSqFt *    /*Cubic feet of water from the
                                             user's input */
    (waterInEquivalentInchesOfRain/INCHES_IN_FOOT) * 
    (EVAPORATION_DURING_IRRIGATION + 1);
    double gallonsOfWater = cubicFeetOfWater / CUBIC_FT_PER_GALLON;
    double finalCostOfWater = (cubicFeetOfWater * costOfWater)/100;
    
    /* Outputs the cubic feet of water, gallons of water, and the cost of the 
    water */
    cout << endl;
    cout << "You need " << showpoint << fixed << setprecision(1) << 
    cubicFeetOfWater << " cubic feet of water." << endl;
    cout << "That will be " << gallonsOfWater << " gallons of water." << endl;
    cout << "That amount of water will cost $" << showpoint << fixed << 
    setprecision(2) << finalCostOfWater << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
