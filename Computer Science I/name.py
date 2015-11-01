# Programmer Kyle Beadle
# Computer Science I    Sixth Period
# Assignment No. 6      Due Date: November 1, 2013
#
# Problem Statement- This program will manipulate the user's name
#
import string

print ("This program will manipulate your name.")
print ("")

#getting data
name = input("Enter your first and last name ")

#finds space where the last name will begin
space = str.find(name,' ')
space = space+1

#seperates the last and first name
lastname = name[space: ]
firstname = name[ :space]

#puts the user's name in backwards form
total = len(name)  #finds how many letters are in the string
backwards = ""  #empty string
br = total - 1 #backwards range - assigns number to characters
for p in range(br,-1,-1):
    c = name[p]
    backwards = backwards + c

#finds the first initial for each name
initial1 = name[0:1]
initial2 = name[space:space+1]

#finds the amount of letters in each name
fnc = len(firstname)-1  #fnc = first name characters
lnc = len(lastname)     #lnc = last name characters
anc = (fnc+lnc)/2.0     #anc = average of characters in each name

#output
print ("")
print ("In Last, First form it is", lastname+",",firstname)
print ("Backwards it would be",backwards)
print ("Your initials are", initial1+"."+initial2+".")
print ("Your first name cointains",fnc,"letters")
print ("Your last name cointains",lnc,"letters")
print ("The average letters per name is",anc)
