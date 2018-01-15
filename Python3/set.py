#Coded by Nicholas Ting
#Coded on 12/1/2018
#HackerRank Problem on Sets
#Practice

M = int(input())
Mset = set(map(int,input().split()))

N = int(input())
Nset = set(map(int,input().split()))

#Finds the difference of each set, and update a.
a = Nset.difference(Mset)
b = Mset.difference(Nset)
a.update(b)

for elem in sorted(a):
    print(elem)
