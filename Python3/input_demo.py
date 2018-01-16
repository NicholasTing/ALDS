#Coded by Nicholas Ting Jing Kun
#Coded on 16/1/2018
#Found out that the eval function is really strong
#From "HackerRank Python: Builtin : Input()" challenge
#Takes in two vals, x and k and returns whether
#the formula evaluates to k.

x,k = map(int,input().split())
print(eval(input()) == k)
