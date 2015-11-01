# Programmer Kyle Beadle
# Computer Science I    Sixth Period
# Assignment No. 8      Due Date: November 20, 2013
#
# Problem Statement - This program will print acronyms for a data file
#
import string

f = open ("h:\\8.txt","r") #opening file for reading
print ("Output:")
st1, st2 = "Phrase", "Acronym" #string 1 and string 2
print ("%s %60s" % (st1,st2))
#Loop to split strings
for x in f:
    empty = ""
    rem = str.rstrip(x)
    s = str.split(rem)
    #Loop to make the acronym
    for t in s:
        first = t[0]
        empty += first
        cap = empty.upper()
    print ("%-59s %s" % (rem,cap))  #formatting the data
f.close()
        
