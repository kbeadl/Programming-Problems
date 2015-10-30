/*
Programmer - Kyle Beadle
Seventh Period          Computer Science II
Assignment No. 4        Due Date : September 24, 2014
           
Problem Statement - This program creates a username from the inputed name.

Description of Algorithm - It begins with taking in the input, which is supposed
to be some type of name. It then finds the first character to the name and uses
it as the first the first character in the username. Secondly, it takes in the
last character of the first name and uses it as the second character for the 
username. Thirdly, it finds the first four letters of the last name and adds it 
to the end of the username. Then it finds the first number by modulus the second
character by seven. The second number is then found by finding the square root
of the fourth character. The third number is then found by gettng the sixth and 
seventh character and flooring the product of the two characters to cube root. 
Finally, you add them all together and add the suffix B6 to store the final 
username into a variable. You can then print and use the username later.

*/

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

const string SUFFIX = "B6";

int main(int argc, char *argv[])
{
    string name;
    
    //Gets the name of the user
    cout << "Enter your name> ";
    getline(cin,name);
    cout << endl;
    
    //Finds the first character
    char firstLetter = name.at(0);
    
    //Finds the space between the names
    int space = name.find(" ");
    
    //Finds the last letter of the first name
    char lastLetter = name.at(space-1);
    
    //Finds the first four letters of the last name
    string firstFourLetters = name.substr(space+1,4);
    
    //Finds the first number to be used by using modulus division on the second
    //letter of the name
    char secondLetter = name.at(1);
    int firstNum = secondLetter % 7;
    
    //Finds the second number by finding the square root of the fourth letter
    char fourthLetter = name.at(3);
    int secondNum = round(sqrt(int(fourthLetter)));
    
    //Finds the third number by finding the floor value of the cube root of the
    //ASCII value of the sixth and seventh letter of the name
    char sixthLetter = name.at(5);
    char seventhLetter = name.at(6);
    int thirdNum = floor(pow(int(sixthLetter)*int(seventhLetter),1/3.0));
    
    //Begins the stringstream
    stringstream username;
    
    //Adds all of the values to one string
    username<<firstLetter<<lastLetter<<firstFourLetters<<firstNum<<secondNum
    <<thirdNum<<SUFFIX;
    
    //Assigns the username to a final variable
    string output = username.str();
    
    //Outputs the username
    cout << "Your user name is " << output << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
