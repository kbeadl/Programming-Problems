# Programmer Kyle Beadle
# Computer Science I    Sixth Hour
# Assignment No. 16     Due Date: April 11, 2014
#
# Problem Statement - Find and print the number of combinations and permutations
#                     of the data that the user enters
#
from string import*

# Purpose: Find the factorial of a given number
# Parameters: n-the number that will be factorialized
# Return: fact-the factorial of the number used
def factorial(n):
    fact = 1
    for k in range(1,n+1):
        fact = fact*k
    return fact

# Purpose: Find the number of combinations for a group
# Parameters: n-number of items in the larger group
#             r-number of items to be placed in the smaller group
# Return: combo-the number of combinations for the group
def combinations(n,r):
    nF = factorial(n)
    rF = factorial(r)
    n_r = factorial(n-r)
    combo = nF/(n_r*rF)
    return combo

# Purpose: Find the number of permutations for a group
# Parameters: n-number of items in the large group
#             r-number of items to be placed in the smaller group
# Return: perm-the number of permutations for the group
def permutations(n,r):
    nF = factorial(n)
    rF = factorial(r)
    n_r = factorial(n-r)
    perm = nF / n_r
    return perm

# Purpose: Allow the user to enter and recieve the data
def main():
    do_it_again = True
    while do_it_again == True:
        n = int(input("How many items do you have? "))
        r = int(input("How many groups do you want them placed into? "))
        # checks to see if the data is valid
        if n>=0 and r>=0 and n>=r and int(n)==n and int(r)==r:
            combo = combinations(n,r)
            perm = permutations(n,r)
            print("There are",combo,"combinations available.")
            print("There are",perm,"permuatations available.")
        else:
            print("Data invalid. Please enter valid data.")
        again = input("Would you like to enter more data? y or n ")
        print("")
        again = str.lower(again)
        #checks whether user entered y or n
        if again == "y":
            do_it_again = True
        else:
            do_it_again = False
            print ("Thanks!")

main() #performs the main function
