# Programmer Kyle Beadle
# Computer Science I    Sixth Hour
# Assignment No. 14     Due Date: March 21, 2014
#
# Problem Statement - Tell if a string from a file is a palindrome or not
#
from string import*
fil = open("H:phrases.txt","r")
for x in fil:
    string = rstrip(x)  #strips /n
    lowerString = string.lower()  #lowercase string
    reverseString = lowerString[::-1]  #reverses string
    if reverseString == lowerString:  #tells if the string is a palindrome
        print ("%s is a perfect palindrome"%(string))
    else: #tells if string is not a palindrome
        #removes puncuation and spacing
        newString = replace(lowerString," ","")
        newString = replace(lowerString,".","")
        newString = replace(lowerString,",","")
        newString = replace(lowerString,"'","")
        reverseString = newString[::-1] #reverses newString
        #removes puncuation and spacing from reverseString
        reverseString = replace(reverseString," ","")
        reverseString = replace(reverseString,".","")
        reverseString = replace(reverseString,",","")
        reverseString = replace(reverseString,"'","")
        if newString == reverseString: #imperfect palindrome
            print("%s is a perfect palindrome"%(string))
        else: #not a palindrome
            print("%s is not a palindrome"%(string))
