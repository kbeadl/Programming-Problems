/*
Programmer - Kyle Beadle
Seventh Period          Computer Science II
Assignment No. 14       Due date: 3/23/15

Problem Statement - This program defines a class that can perform operations
                    based on a single term in a polynomial.

Description of Algorithm - This prgram begins by defining a class and creating
function prototypes and variable that pertain to a "term". Then, the program
creates the constructor function, along with the functions to get the
coefficients, power of x, and power of y. Then the program has a function that
prints out the "term" with carrot keys. Finally, the program has functions that
assign the coefficient and powers of x and y.

*/

#include <cstdlib>
#include <iostream>

class Term
{
     public:
            Term();  //constructor function
            double getCoefficient();
            int getXPower();
            int getYPower();
            void algebraic();
            void setCoefficient(double);
            void setXPower(int);
            void setYPower(int);
            void setTerm(double,int,int);
     private:
            double coefficient;
            int xPower;
            int yPower;
};

using namespace std;

Term makeATerm();

int main(int argc, char *argv[])
{   
    Term t1;
    cout << "initial value of the term is ";
    t1.algebraic();
    cout << endl << endl;
    t1.setTerm(1.2,3,4);
    cout << "The term is now ";
    t1.algebraic();
    cout << endl<<endl;
    Term t2;
    t2.setTerm(-1,11,12);
    t2.algebraic();
    cout << endl<<endl;
    
    cout << "printing a series of terms " <<endl;
    
    for (int k=0,x=-1,y=6;x<6;k=-2*k+1,x++,y--)
    {
        double c = 1.5*k;
        t2.setTerm(c,x,y);
        t2.algebraic();
        cout << endl;
        }
    cout <<endl<< endl;
    
    cout << "making and printing a random term" << endl;
    Term t3 = makeATerm();
    cout << "term T3 = " << t3.getCoefficient()<<"x^" << t3.getXPower()
    << "y^"<<t3.getYPower()<<endl<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}

Term makeATerm()
{
     Term temp;
     double tc = (double(rand())/RAND_MAX)*19;
     tc = int(tc*1000)/1000.0;
     int tx = rand()%13+2;
     int ty = rand()%12+3;
     temp.setTerm(tc,tx,ty);
     return temp;
}

/**
   This function gets and assigns a full term.
   @param a - coefficient
   @param b - power of x
   @param c - power of y
*/

void Term :: setTerm(double a, int b, int c)
{
     coefficient = a;
     xPower = b;
     yPower = c;
}

/**
   This is the constructor function for the Term class.
*/

Term :: Term()
{
     coefficient=4;
     xPower=2;
     yPower=3;
}

/**
   This function gets the coefficient from the Term class.
   @return this function returns the coefficient
*/

double Term :: getCoefficient()
{
    return coefficient;
}

/**
   This function gets the power of x from the Term class.
   @return this function returns the power that x is to
*/

int Term :: getXPower()
{
   return xPower;  
}

/**
   This function gets the power of y from the Term class.
   @return this function returns the power that y is to
*/

int Term :: getYPower()
{
   return yPower;  
}

/**
   This function prints the term out in algebraic form.
*/

void Term :: algebraic()
{    
     //Checks certain conditions and outputs based on them
     if (coefficient ==0)cout << "0";
     else{
          if ((coefficient ==1 || coefficient ==-1)&&xPower==0&&yPower==0)
          cout << coefficient;
          if (coefficient == 1)cout << "";
          else if (coefficient == -1) cout << "-";
          else if (coefficient < 0) cout << coefficient;
          else if (coefficient >1) cout << coefficient;
          if (xPower > 1)cout << "x^" << xPower;
          else if (yPower ==0)cout << "";
          else cout << "x";
          if (yPower > 1)cout << "y^" << yPower;
          else if (yPower ==0)cout << "";
          else cout << "y";
          }
}

/**
   This function sets the value of the coefficient.
   @param co - the coefficient
*/

void Term :: setCoefficient(double co)
{
   coefficient = co;
}

/**
   This function sets the power of x.
   @param x - the power that x will be set to
*/

void Term :: setXPower(int x)
{
    xPower = x;
}

/**
   This function sets the power of y.
   @param y - the power that y will be set to
*/

void Term :: setYPower(int y)
{
    yPower = y;
}
