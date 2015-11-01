# Programmer Kyle Beadle
# Computer Science I    Sixth Hour
# Assignment No. 4      Due Date: October 11, 2013
#
# Problem Statement - This program will find a player's golf score
#
print ("This program will find your golf score.")
print

#input
holes = int(input("How many holes did you play? ")) #asks user how many holes
holes = holes + 1                                   #they played
print ("Enter your score on each hole.")
print
total=0  #starting total

#accumulator processing
for num in range(1,holes):
    print ("Hole ",num,": ",)
    x = int(input())  #getting score for each hole
    total += x  #accumulating the sum

#output
print
print ("Your score for round is",total)
