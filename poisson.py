#Coded by Jing Kun Ting
#Coded on 12/1/2017
#Poisson distribution example in python

import math

mean = 2.5
variable = 5

def poisson(l, k):
    return ((l ** k) * math.exp(-l)) / math.factorial(k)

print(poisson(mean,b))

