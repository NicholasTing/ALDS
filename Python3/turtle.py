#Coded by Jing Kun Ting
#Coded on 11/1/2018
#Fun example on turtle

import turtle
window = turtle.Screen

print("Enter a number between 1 and 10")
num = int(input())

if 1 <= num <= 10:
    for i in range(num):
        turtle.forward(100)
        turtle.right(360/num)
        for i in range(num):
            turtle.forward(50)
            turtle.right(360/num)
