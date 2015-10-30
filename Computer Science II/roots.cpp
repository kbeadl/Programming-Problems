/*
  Programmer- Kyle Beadle
  Seventh Period         Computer Science II
  
  Assignment No. 9       Due Date- December 10, 2014
  
  Problem Statement - Finds the roots of points a,b, and c using the quadratic 
                      formula.
  
  Description of Algorithm - Firstly, the program gets the data from the user
  and returns it from reference parameters. Then, the program finds the 
  discriminant and returns it to the main function. Then, the program finds the
  roots using the discriminant and the data entered by the user. If the 
  discriminant is less than 0 the program prints two imaginary roots, and if
  the discriminant is more than 0 it prints the two roots, except if it is a
  double root, in which case, the program gives the user a message informing
  them that the roots are double roots.
  
*/

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void quadraticFormula(int, int, int);
double discrim(double, double,double);
void getdata(double&,double&,double&);
void quadratic(double discriminant, double a, double b, double c);

int main(int argc, char *argv[])
{
    double a,b,c;
    
    //Gets the data for the discriminant and the quadratic formula.
    getdata(a,b,c);
    
    //Gets the discriminant to be used for the quadratic formula.
    double discriminant = discrim(a,b,c);
    
    //Prints the roots found from the quadratic formula.
    quadratic(discriminant,a,b,c);
       
    system("PAUSE");
    return EXIT_SUCCESS;
}

/**
   This function gets the data for a,b, and c, for the quadratic function
   @param &a - the value of a that is returned from a reference parameter
   @param &b - the value of b that is returned from a reference parameter
   @param &c - the value of c that is returned from a reference parameter
*/

void getdata(double&a,double&b,double&c){
    cout << "Enter value of a ";
    cin>>a; 
    cout << "Enter value of b ";
    cin>>b; 
    cout << "Enter value of c ";
    cin>>c;
    cout << endl;
}

/**
   This function finds the discriminant for the quadratic function.
   @param a - value of a to be used as a in the discriminant formula
   @param b - value of b to be used as b in the discriminant formula
   @param c - value of c to be used as c in the discriminant formula
   @return the discriminant found from the formula
*/

double discrim(double a, double  b,double c){
    return pow(b,2)-4*a*c;
}

/**
   This function finds and prints the roots, double root, and complex number 
   roots.
   @disciminant - the discriminant used in the quadratic formula
   @param a - value of a to be used as a in the quadratic formula
   @param b - value of b to be used as b in the quadratic formula
   @param c - value of c to be used as c in the quadratic formula
*/

void quadratic(double discriminant, double a, double b, double c){
     double x1,x2,real,imaginary;
     //Prints both roots, if the discriminant does not allow for imaginary or
     //double roots.
     if (discriminant >= 0){
     x1 = (-b + sqrt(discriminant))/(2.0*a);  //First root
     x2 = (-b - sqrt(discriminant))/(2.0*a);  //Second root
     //Prints only one root and a double root message if the two roots are the 
     //same.
     if (x2==x1) cout << fixed << setprecision(4)<< "The double root is " << x1
     <<endl<<endl;
     else cout << fixed << setprecision(4) << "The first root is " << x2 << endl 
     << "The second root is " 
     <<x1 <<endl<<endl;
     }
     //Prints a complex number if the discriminant is negative.
     else{
     real = -b / (2.0*a); //Real part of the complex number
     imaginary = sqrt(-discriminant)/(2.0*a); //Imaginary part of the complex
                                              //number
     cout << fixed << setprecision(4) << "The first root is " << real << " + " 
     << imaginary << "i"<<endl;
     cout << fixed << setprecision(4) << "The second root is " << real << " - " 
     << imaginary << "i"<<endl<<endl;
     }
}
