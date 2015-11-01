# Programmer Kyle Beadle
# Computer Science I    Sixth Period
# Assignment No. 5      Due Date: October 23, 2013
#
# Problem Statement - This program will find pi by finding the sum of three
#                     series of values
#
import math
print ("This program will find pi using three different ways.")
print ("")

#loop to find pi using different terms
for numberofterms in [50,500,5000,50000,500000]:
    total = 0  #sum of method one
    total2 = 0 #sum of method two
    total3 = 0 #sum of method three
    #loop to find pi for each number of terms
    for x in range(1,numberofterms+1):
        num1 = 6.0/(x**2)  #first method
        total += num1
        pi1 = math.sqrt(total)  #pi for method 1
        num2 = 1.0/((2*x-1)**2) #second method
        total2 += num2
        pi2 = math.sqrt(total2*8.0) #pi for method 2
        num3 = (4.0/((2*x-1))*(-1)**(x+1))  #third method
        total3 += num3
        pi3 = total3  #pi for method3
    #prints out answers for each method with each set of terms
    print ("pi by method 1 using",numberofterms,"is",pi1)
    print ("pi by method 2 using",numberofterms,"is",pi2)
    print ("pi by method 3 using",numberofterms,"is",pi3)
    print ("")
print ("Complete")
