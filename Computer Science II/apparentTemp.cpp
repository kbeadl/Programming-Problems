/*
Programmer - Kyle Beadle
Seventh Period          Computer Science II
Assignment No. 6        Due date: October 21, 2014

Problem Statement - This program finds the apparent temperature.

Description of Algorithm - This program begins by taking in the temperature in
fahrenheit, the relative humidity, and the wind speed in miles per hour. Then,
the program takes that data and puts it in the apparent temperature function.
The apparent temperature function firstly turns the temperature into celcius
from fahrenheit using the proper function. Then the program converts miles per
hour into meters per second by calling a function that uses the convertion
formula. Then, the program finds the wator vapor by using the two formulas for
finding water vapor. Finally, the program puts all of the previously mentioned
values into the apparent temperature formula and returns the apparent
temperature as an integer in degrees celcius to the main function.

*/

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

const double METERS_IN_MILE = 1609.3;
const double SEC_IN_HOUR = 3600;

double fToC(double tempF);                          
double cToF(double tempC);                            
double milesPHToMetersPS(double windSpeed);
double waterVapor(double relativeHumidity, double celTemp);
double apparentTemp(double t, double w, double v);

int main(int argc, char *argv[])
{
    double temperature, wind, humidity;
    cout << "Enter the temperature in fahrenheit: ";
    cin >> temperature;  //the temperature in fahrenheit
    cout << "Enter the wind speed in miles per hour: ";
    cin >> wind;  //the wind speed in miles per hour
    cout << "Enter the relative humidity: ";
    cin >> humidity; //the relative humidity
    double appTemp = apparentTemp(temperature,wind,humidity);  
                     //the apparent tempertaure in degrees celcius
    cout << "The apparent temperature is " << appTemp <<endl<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

/**
   Converts the temperature from fahrenheit to celcius.
   @param tempF - temperature in fahrenheit
   @return the temperature in celcius
*/

double fToC(double tempF){
       return (tempF-32)*5/9.0;
}

/**
   Converts the temperature from celcius to fahrenheit.
   @param tempC - temperature in celcius
   @return the temperature in fahrenheit
*/

double cToF(double tempC){
       return (tempC*1.8)+32;
}

/**
   Convert wind speed from miles per hour to meters per second.
   @param windspeed - wind speed in miles per hour
   @return wind speed in meters per second
*/

double milesPHToMetersPS(double windSpeed){
       return (windSpeed*METERS_IN_MILE)/SEC_IN_HOUR;
}

/**
   This function finds the wator vapor pressure effect.
   @param relativeHumidity - the relative humidity in the form of percent
   @param celTemp - the temperature in degrees celcius
   @return the water vapror pressure 
*/

double waterVapor(double relativeHumidity, double celTemp){
       double p = (17.27 * celTemp) / (237.7 + celTemp); //what to raise e to
       double w = 6.105*(relativeHumidity / 100.0) * exp(p);
                                            //water vapor pressure
       return w;
}

/**
   Determines the apparent temperature and returns it to the calling statement
   @param t - the temperatur in celcius
   @param v - the wind speed in meters per second
   @param w - the water vapor pressure effect
   @return the apparent temperature
*/


double apparentTemp(double t, double w, double v){
       double temp = fToC(t); //temperature in degrees celcius
       double wind = milesPHToMetersPS(w);  //wind speed in meters per second
       double vapor = waterVapor(v,temp);  //wator vapor pressure
       double relativeTemp = temp + (0.33*vapor) - (0.70*wind) - 4.00;
                           //apparent tempurature
       double rTemp = round(cToF(relativeTemp));  //makes apparent temp an int
       return rTemp;
}
