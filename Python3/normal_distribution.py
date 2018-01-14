#Coded by Nicholas Ting Jing Kun
#Coded on 14-Jan-2018
#Coded for HackerRank Challenge

import math
mean = 20
std = 2

first = 19.5
second1 = 20
second2 = 22

def normal(mean,std,x):
    ans = (1/2) * (1 + math.erf((x-mean)/(std*math.sqrt(2))))
    return ans


print("{:.3f}".format(normal(mean,std,first)))
print("{:.3f}".format(normal(mean,std,second2)-normal(mean,std,second1)))
