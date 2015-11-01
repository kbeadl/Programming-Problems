# Programmer Kyle Beadle
# Computer Science I    Sixth Hour
# Assignment No. 7      Due Date: November 15, 2013
#
# Problem Statement - This program will print a chart of values 1-50
#

#Importing the libraries needed
import string
import math

#Heading of chart
title = "The Table of Mathematical Values"
print (title.center(80))
print ("")
#formatting
print ("%13s %12s %10s %14s %13s" % ('number','square','cube','square root','cube root'))

#String for the data in the chart
for x in range(1,51):
    s = math.pow(x,2)
    c = math.pow(x,3)
    sq = x**0.5
    cr = x**(1/3.0)
    #formatting
    print ("%13d %12d %10d %14.4f %13.5f" % (x,s,c,sq,cr))
