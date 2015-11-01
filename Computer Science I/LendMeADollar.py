#Programmer Kyle Beadle
#Computer Science I     Sixth Hour
#Assignment No. 2       Due Date: 10/2/13
#
#Problem Statement - This program will determine interest, monthly payment
#                    and amount paid.
#
print ("This program will determine interest, monthy payment, and the amount paid to a bank")

#getting data
amt = input("Enter the amount borrowed $") #amount borrowed
n = input("Enter the number of payments ") #number of payments
ir = input("Enter the annual interest rate ") #annual interest rate
p = input("Enter the number of payments per year ") #payments per year

#processing the data
ir = float(ir)    #Turns value into a float
n = float(n)      #Turns value into a float
amt = float(amt)  #Turns value into a float
p = float(p)      #Turns value into a float
ir = ir/100.0  #makes the interest rate a percent
pmt = (amt*ir/p) / (1-(1+ir/p)**-n) #monthly payment
pmtr = round(pmt,2) #rounds the pmt to make it a $
total = pmtr*n; #finds the total
i = total-amt  #finds the interest
i = round(i,2) #rounds the interest

#output
print
print ("The monthly payment on the loan will be $", pmtr)
print ("The total amount paid is $", total)
print ("The total interest paid is $",i)
