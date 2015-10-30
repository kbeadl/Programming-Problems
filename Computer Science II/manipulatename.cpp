/*
Programmer - Kyle Beadle
Seventh Period          Computer Science II
Assignment No. 5        Due Date: October 7, 2014

Problem Statement - The program processes the user's name in different ways and 
then outputs the processing.

Description of Algorithm - The program begins by taking in the user's name. Then
the program splits the user's name into three seperate strings, one for each
name. The program then makes a username for the user by concatenating the first 
two letters of the users first name, the last five letters of their last name, 
and the number 133. Then the program finds finds the person's initials by 
getting the first letter of each name and concatenating them together. Finally, 
the program finds the average of characters per name and stores them to find the
average later on. All of the mentioned above processes are then printed out for 
the user to see.
*/

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

const string USERNAME_SUFFIX = "133";

int main(int argc, char *argv[])
{
    string name; //String variable for name
    
    //Takes in the users full name
    cout << "Enter your full name >> ";
    getline(cin,name);
    cout << endl;
    
    //Finds the spaces in the name
    int firstSpace = name.find(" ",0);
    int secondSpace = name.find(" ",firstSpace+1);
    
    //Gets the length of the name in an integer
    int length = name.length();
    
    //Gets the first name
    string firstName = name.substr(0,firstSpace);
    
    //Gets the username by finding the difference between the spaces places
    int difference = secondSpace - firstSpace;
    string middleName = name.substr(firstSpace+1,difference);
    
    //Gets the last name by finding the length of the name minus the last name
    //and subtracts it from the full length
    string firstAndLastName = firstName + middleName;
    int lengthOfNameMinusLast = firstAndLastName.length();
    string lastName = name.substr(secondSpace+1,length-lengthOfNameMinusLast);
    
    //Creates a username for the user
    string firstLetters = firstName.substr(0,2);
    string lastLetters = lastName.substr(1,5);
    string username = firstLetters + lastLetters + USERNAME_SUFFIX;
    
    //Creates the users initials from the string
    string firstLetter = firstName.substr(0,1);
    string secondLetter = middleName.substr(0,1);
    string thirdLetter = lastName.substr(0,1);
    
    string initials = firstLetter + ". " + secondLetter + ". " + thirdLetter + 
    ". ";
    
    //Finds the length of each of the names
    int firstLength = firstName.length();
    int secondLength = middleName.length()-1;
    int thirdLength = lastName.length();
    double average = (firstLength + secondLength + thirdLength)/3.0;
    
    //Outputs all of the processing done to the string
    cout << "Your name is " << lastName << ", " << firstName << " " 
    << middleName << endl << "Your user name is " << username << endl 
    << "Your initials are " << initials << endl << "Your first name is " 
    << firstName << " and it contains " << firstLength << " letters" << endl 
    << "Your middle name is " << middleName << " and it contains " 
    << secondLength << " letters" << endl << "Your last name is " << lastName 
    << " and it contains " << thirdLength << " letters" << endl
    << "The average letters per name is " << showpoint << fixed 
    << setprecision(2) << average << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
