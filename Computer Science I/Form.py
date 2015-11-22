# Programmer Kyle Beadle
# Computer Science I           Sixth Period
# Assignment Graphics No. 2    Due Date: February 26, 2014
#
# Problem Statement - Allow the user to answer a question then print that answer
#                     into IDLE console.
#
from graphics import*
win = GraphWin("",300,300)

#question for the user to answer
txt = Text(Point(150,20),"Which of the following web browsers")
txt2 = Text(Point(150,38),"do you use?")
txt.setStyle('bold')
txt2.setStyle('bold')
txt.draw(win)
txt2.draw(win)

#circles the user will select for an answer
circ1 = Circle(Point(20,100),3)
circ1.draw(win)
circ2 = Circle(Point(20,130),3)
circ2.draw(win)
circ3 = Circle(Point(20,160),3)
circ3.draw(win)
circ4 = Circle(Point(20,190),3)
circ4.draw(win)
circ5 = Circle(Point(20,220),3)
circ5.draw(win)

#answers to the question
txt3 = Text(Point(80,100),"Internet Explorer")
txt3.setSize(10)
txt3.draw(win)
txt4 = Text(Point(47,130),"Safari")
txt4.setSize(10)
txt4.draw(win)
txt5 = Text(Point(75,160),"Google Chrome")
txt5.setSize(10)
txt5.draw(win)
txt6 = Text(Point(50,190),"Firefox")
txt6.setSize(10)
txt6.draw(win)
txt7 = Text(Point(47,220),"Opera")
txt7.setSize(10)
txt7.draw(win)

#enter button
rec = Rectangle(Point(100,250),Point(200,275))
rec.draw(win)
txt8 = Text(Point(150,263),"Enter")
txt8.draw(win)

#get answer from user
click = win.getMouse()
x = click.getX()
y = click.getY()
answer = False
while x > 0 and y > 0:
    #creates an invisible box around Internet Explorer
    if(x>15 and x<150)and(y>90 and y<115):
        #fills selected circle
        circ1.setFill("black")
        circ2.setFill("white")
        circ3.setFill("white")
        circ4.setFill("white")
        circ5.setFill("white")
        answer = True
        answer2= "Internet Explorer"
    #creates an invisible box around Safari
    if(x>15 and x<150)and(y>120 and y<130):
        #fills selected circle
        circ1.setFill("white")
        circ2.setFill("black")
        circ3.setFill("white")
        circ4.setFill("white")
        circ5.setFill("white")
        answer = True
        answer2= "Safari"
    #creates an invisible box around Google Chrome
    if(x>15 and x<150)and(y>150 and y<1175):
        #fills selected circle
        circ1.setFill("white")
        circ2.setFill("white")
        circ3.setFill("black")
        circ4.setFill("white")
        circ5.setFill("white")
        answer = True
        answer2= "Google Chrome"
    #creates an invisible box around Firefox
    if(x>15 and x<150)and(y>180 and y<2015):
        #fills selected circle
        circ1.setFill("white")
        circ2.setFill("white")
        circ3.setFill("white")
        circ4.setFill("black")
        circ5.setFill("white")
        answer = True
        answer2= "Firefox"
    #creates an invisible box around Opera
    if(x>15 and x<150)and(y>210 and y<235):
        #fills selected circle
        circ1.setFill("white")
        circ2.setFill("white")
        circ3.setFill("white")
        circ4.setFill("white")
        circ5.setFill("black")
        answer = True
        answer2= "Opera"
    #lets user click on enter button after answer is selected
    #if an answer is not selected nothing happens
    if(x>100 and x<200)and(y>250 and y<275) and answer==True:
        win.close() #closes window
        print("You use %s!"%(answer2)) #prints the users answer
    #checks to see if the loop will be repeated
    click = win.getMouse()
    x = click.getX()
    y = click.getY()
#done
