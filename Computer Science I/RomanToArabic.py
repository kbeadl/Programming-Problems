# Programer Kyle Beadle
# Computer Science I    Sixth Period
# Assignment No. 15     Due Date: April 4, 2014
#
# Problem Statement - Converts Roman Numerals to arabic numerals
#
from string import*  #allows the string library to be used

# purpose: allow the user to enter their roman numeral of choice
# returns: numeral- the roman numeral the user entered
def readNumeral():
    numeral = input("Enter the roman numeral: ")  # allows the user to enter
                                                  # the roman numeral
    numeral = str.lower(numeral)                  # makes the entire string
                                                  # lowercase
    return numeral                                # returns the numeral entered

# purpose: checks to see if the roman numeral can be converted
# parameters: numeral - takes in the numeral the user entered
# returns: validity- whether or not the entire roman numeral is valid
def valid(numeral):
    s = numeral #assigns the numeral to a new variable
    validity = True
    for x in s:
        if x not in ['m','d','c','l','x','v','i']: #checks to see if the numeral
            validity = False                       #is valid
    return validity #returns validity

# purpose: convert the roman numeral into arabic numbers
# parameters: numeral-takes in the roman number entered
# returns: total-the roman numeral converted into arabic numbers
def convert(numeral):
    m = str.count(numeral,"m")*1000
    d = str.count(numeral,"d")*500
    c = str.count(numeral,"c")*100
    l = str.count(numeral,"l")*50
    x = str.count(numeral,"x")*10
    v = str.count(numeral,"v")*5
    i = str.count(numeral,"i")
    total = m+d+c+l+x+v+i
    return total

#purpose: perform the purpose of the program as a whole
def main():
    numeral = readNumeral()
    validity = valid(numeral)
    total = convert(numeral)
    if validity == True:
        print ("Your number is", total)
    else:
        print ("Your number is invalid.")

main() #goes through main function
        
