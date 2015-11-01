# Programmer Kyle Beadle
# Computer Science I    Sixth Period
# Assignment No. 3      Due Date: October 8, 2013
#
# Problem Statement - Find the passing efficiency for NCAA and NFL Quarterbacks
#
print ("This program will find the passing efficiency for NCAA and NFL Quarterbacks")

#getting the data
print
a = float(input("How many passes were attempted? "))   #attempted passes
c = float(input("How many passes were completed? "))   #completed passes
y = float(input("How many yards were gained? "))       #yards gained
tp = float(input("How many touchdown passes? "))       #touchdown passes
i = float(input("How many passes were intercepted? ")) #Interceptions

#processing
ncaa = ((y*8.4)+(tp*330)+(c*100)+(i*-200))/a #passing efficiency for the ncaa
nfl = ((((100.0*c/a)-30.0)/20.0)+(((y/(a*1.0))-3.0)*0.25)+(20.0*tp/a)+(2.375-((25.0*i)/a)))*100.0/6.0

#output
print
print ("NCAA passing efficiency is ", ncaa)
print
print ("NFL passing efficiency is ", nfl)
