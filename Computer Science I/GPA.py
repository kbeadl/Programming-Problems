# Programmer Kyle Beadle
# Computer Science I    Sixth Period
# Assignment No. 12     Due Date: February 14, 2014
#
# Problem Statement - This program takes data from a file and finds the user's
#                     GPA, quality points, and name
#
from string import*  #imports the string library
fil = open("H:12Data.txt","r")  #opens a file to be read
for name in fil:  #reads the file line by line
    grade = fil.next()  #skips to the next line in the file
    name = name.rstrip()  #strips the new line character
    print (name)
    grade = grade.rstrip()
    total =0
    classes = 0.0
    #determines quality points from the given data
    for letters in grade:
        if letters == "a" or letters == "B":
            points = 4
        elif letters == "A":
            points = 5
        elif letters == "b" or letters == "C":
            points = 3
        elif letters == "c":
            points = 2
        elif letters == "d" or letters == "F" or letters == "D":
            points = 1
        else:
            points = 0
        classes++  #finds how many grades the person has
        total += points  #determines total quality points
        gpa = total/classes #finds gpa
        print (letters)
    print("")
    print ("Total quality points is",total)
    print ("Grade point average is %0.4f"%(gpa)) #gpa is printed with 4 decimals
    print("")
fil.close() #closes file        
