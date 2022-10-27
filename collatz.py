#Import libraries
import turtle as T

#Number of iterations
Iterantions=50
#angle of conjecture drawing
angle = 10
#how far the turle will move
length = 25

#where the pen starts each line
x,y = 300,-300

#For adding
numSteady = 2
num = numSteady

#Setting up turtle
T.speed(0)
T.up()
T.goto(x, y)
T.setheading(90)
T.down()
T.colormode(255)

#making pretty colors
B = 0
BIncrease = round(255/Iterantions)

#while loop
while numSteady < Iterantions:

    T.pencolor(0,-B+255,B)

    #If num is divisible by 2 do this:
    if (num % 2) == 0:
        T.left(angle)
        T.forward(length)
        num = num/2

    #If num is NOT equally divisible by 2 do this:   
    else:
        T.right(angle)
        T.forward(length)
        num = num*3+1

    #If num <= 1, reseat back to x and y axis, and continue the program
    if num <= 1:
        T.up()
        T.goto(x, y)
        T.setheading(90)
        T.down()
        numSteady = numSteady + 2
        num = numSteady
        B = B + BIncrease
