# Programmer Kyle Beadle
# Computer Science I    Sixth Period
# Assignment No. 13     Due Date: March 14, 2014
#
# Problem Statement - This program will translate words into pig latin
#
from string import*

print ("This program will translate what you type into pig latin.")
print("")
again = "y" #a flag variable
while again == "y":  #if the variable again equals y go through the loop
    #gets the word from the user
    word = input("Please enter a single word. ")
    pos = 0
    vowels = ['a','A','e','E','i','I','o','O','u','U']
    yword = False
    while pos >= 0:
        letter = word[pos]
        #determines if y is a vowel or not
        if (letter =='y' or letter=='Y') and pos ==0:
            pos+=1
            if letter in vowels or pos>=1:
                pos+=1
            else:
                letters = word[:pos]
                word = word[pos:]
                print (word + "-"+letters+"ay")
                pos=-1
                yword = True
        #finds out if the first letter is not a vowel
        if letter not in vowels:
            pos+=1
        #if first letter is a vowel
        if letter in vowels:
            letters = word[:pos]
            word = word[pos:]
            if not yword:
                print(word+'-'+letters+"ay")
            pos = -1
    #Asks user if they would like to repeat
    again = input("Would you like to enter another word? ")
    #If user does not type enter a y or n
    while again not in ['y','n']:
        print("Please enter a y or n.")
        again = input("Would you like to enter another word? ")
    print("")
print ("Thank You!") #prints this when the user enters no
