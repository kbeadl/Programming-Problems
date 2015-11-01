# Programmer - Kyle Beadle
# Computer Science I        Sixth Period
# Assignment No. 9          Due Date: December 4, 2013
#
# Problem Statement - This program will print a block of numbers for the numbers
#                     in a data file
#
fil = open("h:9,txt","r") #opens the data file

for x in fil:   #loops to make the first line in the block
    num = eval(x)
    lin = str(num)
    line = num * lin
    for a in line:  #loops to make the rest of the block
        line = num*lin
        print (line)
    print ("")

fil.close()  #closes the file
    
