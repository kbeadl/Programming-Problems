# Programmer Kyle Beadle
# Computer Science I    Sixth Period
# Assignment No. 11     Due Date: February 7, 2014
#
# Problem Statement - This program will tell the user what kind of triangle they
#                     have using the sides enetred
#
#getting the side lengths
side1 = float(input("Enter the length of side 1 "))
side2 = float(input("Enter the length of side 2 "))
side3 = float(input("Enter the length of side 3 "))
print ("")

#checks to see if the sides form a triangle
if side1+side2<=side3 or side2+side3<=side1 or side1+side3<=side2:
    print("This is not a triangle.")
else:
    #checks to see if the sides are equal
    if side1==side2==side3:
        print("This is an equilateral triangle.")
    #checks to see if only two sides are equal
    elif side1==side2 or side2==side3 or side1==side3:
        print("This is an isosceles triangle.")
    #if none of the sides are equal it prints a statement
    else:
        print("This is a scalene triangle.")

#end
