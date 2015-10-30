/*
  Programmer - Kyle Beadle
  Seventh Period           Computer Science II
  Assignment No. 13        Due Date : 3/6/15
  
  Problem Statement - This program gets names, grades and contributions from a 
  file, and outputs the name, total points, and gpa.
  
  Description of Algorithm - This program begins by getting the name,
  grade list, and contribution of student(s) from a file. The program then
  processes the grades by putting them into a string stream and getting the
  amount of points for each grade and adding them up. Then the program gets the
  contribution and finds the number of points to be added based on the
  contribution. Finally, the program finds the gpa and outputs the name,points,
  and gpa of the person in the file.
*/

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

const double DOODAHS_PER_POINT = 1000.0; //contribution to raise points by one

void process(string gradeList,int doodahs,double& points, double& gpa);
double processGrade(string grade);
double contribution(int doodahs);
void output(string name,double points, double gpa);

int main(int argc, char *argv[])
{
    //initializing the opening file
    ifstream grades;
    grades.open("S:\\Computer Science II/RustonianGpaData.txt");
    
    //gets the data from the file
    string name;
    getline(grades,name);
    while (!grades.eof())
    {
          string gradeList;
          int doodahs; //contribution
          double points=0,gpa=0;
          getline(grades,gradeList);
          grades >> doodahs;
          grades.ignore(100,'\n');
          process(gradeList,doodahs,points,gpa);
          output(name,points,gpa);  //outputs data
          getline(grades,name);
          cout <<endl;
    }
    cout <<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

/**
   This function processes the list of grades of one person in the file.
   @param gradeList - the list of grades as a string
   @param doodahs - the amount of doodahs given to bump the grades
   @param &points - the amount of total grade points the student has
   @param &gpa - the gpa of the student
*/

void process(string gradeList,int doodahs,double& points, double& gpa)
{
     stringstream grades(gradeList);
     string oneGrade=" ";
     points =0;
     double count = 0;
     while(grades>>oneGrade)
     {
      points += processGrade(oneGrade);
      count++;
     }
     points += contribution(doodahs);
     gpa = points/count;
}

/**
   This function processes the points that one grade has.
   @param grade - the individual grade form the list of grades
   @return the amount of points one grade is worth
*/

double processGrade(string grade)
{
       double points=0;
       //adds to points based on the grade
       if(grade=="A")points+=3;
       if(grade=="A+")points+=3.25;
       if(grade=="A-")points+=2.75;
       if(grade=="B")points+=2;
       if(grade=="B+")points+=2.25;
       if(grade=="B-")points+=1.75;
       if(grade=="C")points+=1;
       if(grade=="C+")points+=1.25;
       if(grade=="C-")points+=0.75;
       if(grade=="D+"||grade=="F+")points+=0.25;
       if(grade=="D-"||grade=="F-")points-=0.25;
       return points;
}

/**
   This function finds the amount of points to be added to the total.
   @param doodahs - the amount of the contribution in doodahs
   @return the amount of points to be added to to total points
*/

double contribution(int doodahs){
       double points=doodahs/DOODAHS_PER_POINT;
       return points;
}

/**
   This function outputs a name, points, and gpa.
   @param name - the name of the person whose grades were processed
   @points - the amount of points the person earned/bought
   @param gpa - the gpa of the person
*/

void output(string name,double points, double gpa)
{
     cout << name << " "<<points<<" points "<< "gpa="<<gpa<<endl;
}
