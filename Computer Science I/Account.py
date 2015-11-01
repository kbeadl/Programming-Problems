# Programmer Kyle Beadle
# Computer Science I    Sixth Hour
# Assignment No. 10     Due Date: December 6, 2013
#
# Problem Statement - Creates a username and a random password for a user
#
from sring import*    #getting the string library
from random import*   #getting the random library
fil = open("h:Users10.txt","r")  #opening a file for reading
password = ""  #empty string
for x in fil:
    orig1 = x.rstrip()  #strip the newline character
    orig = replace(orig1," ","")  #getting rid of the space between the names
    print ("User:",orig1)
    total = 0
    for a in orig:
        ascii = ord(a)
        total += ascii
    space = find(orig1, " ")  #finding the space
    lastname = orig1[space+1:space+5]  #finsing the last name
    firstname = orig1[0:2]  #finding the first name
    final = firstname + lastname #adding the two names
    string = lower(final)
    alph = "abcdefghijklmnopqrstuvwxyz" #the alphabet (lowercase)
    alph += upper(alph)  #Uppercasing the alphabet and adding it to the original
    number = randint(1000,9999)  #generating a random number
    number = str(number) #turning the random number into a string
    #making the password for the user at random
    password = choice(alph) + choice(alph) + choice(alph) + number + choice(alph)
    #Output
    print("Username: %s%d" % (string,total))  #printing username
    print("Password: %s" % (password)) #printing the password
    print("")
fil.close() #closing the file
    
    
