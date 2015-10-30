/*
  Programmer - Kyle Beadle
  Seventh Period          Computer Science II
  Assignment No. 8        Due Date : November 10, 2014
  
  Problem Statement - This program determines and prints the name of a card in
  words from a two character reprsentation
  
  Description of Algorithm - This program begins by getting the card name and
  suit in a string. Then the program splits the two characters up into two
  different character vriables and finds if the two characters are valid input.
  If any of the input is invalid, the program will return an error statement. 
  Once the input is validated, functions are called to print out the name and
  suit of the card.
  
*/

#include <cstdlib>
#include <iostream>

using namespace std;

string getdata();
bool validity(char name, char suit);
void nameFinder(char name);
void suitFinder(char suit);

int main(int argc, char *argv[])
{
    string card; //two character represenation of a card
    
    //Gets the data to be processed
    
    card = getdata();
    
    char name = card.at(0); //number or face of the card
    char suit = card.at(1);  //suit assigned to the card
    
    //Validates the data
    
    bool valid = validity(name,suit);
    
    //Performs this section of code if valid returns true
    
    if (valid == 1){
       nameFinder(name);
       suitFinder(suit);
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

/**
   This function gets the two character represenation of a card
   @return the two character represenation of a card
*/

string getdata(){
       string card; 
       cin >> card; //two character represenation of a card
       return card;
}

/**
   This function finds if the two character represenation of a card is valid
   @param name - number or face of the card
   @param suit - suit assigned to the card
   @return true or false; depending on the 
*/

bool validity(char name, char suit){
     if ((name >= '1' && name <= '9')||(name == 'j' || name == 'q' || 
     name == 'k' || name == 'a' || name == 't')){
        if (suit == 'h' || suit == 's' || suit == 'd' || suit == 'c'){
          return true;
     }
     else{
          cout << "invalid card suit"<<endl;
          return false;
     }
           return true;
     }
     else{
          cout << "invalid card name" <<endl;
        if (suit == 'h' || suit == 's' || suit == 'd' || suit == 'c'){
          return true;
     }
     else{
          cout << "invalid card suit" <<endl;
          return false;
} }}

/**
   This function finds and prints the full name of a card
   @param name - name of the card 
*/

void nameFinder(char name){
     switch(name){     
      case '1' : cout<<"ace of ";
                 break;
      case '2': cout<<"two of ";
                 break;
      case '3': cout<<"three of ";
                 break;
      case '4': cout<<"four of ";
                 break;
      case '5': cout<<"five of ";
                 break;
      case '6': cout<<"six of ";
                 break;
      case '7': cout<<"seven of ";
                 break;
      case '8': cout<<"eight of ";
                 break;
      case '9': cout<<"nine of ";
                 break;
      case 'j':cout<<"jack of ";
                 break;
      case 'q': cout<<"queen of ";
                 break;
      case 'k': cout<<"king of ";
                 break;
      case 'a': cout<<"ace of ";
                 break;
      case 't': cout << "ten of ";
     }
}

/**
   This function finds and prints the full suit of a card
   @param suit - suit assigned to the card
*/

void suitFinder(char suit){
     switch(suit){
      case 's' : cout << "spades" << endl;
      break;
      case 'h' : cout << "hearts" << endl;
      break;
      case 'd' : cout << "diamonds" << endl;
      break;
      case 'c' : cout << "clubs" << endl;
      break;
     }
}
