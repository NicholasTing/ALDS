#Coded by Nicholas Ting Jing Kun
#Coded on 11/1/2018
#Revision on Python 3

num_elems = int(input())

print("Please input %d number of elements to be inserted." % num_elems)

stack = []

print("Input %d elements one at a time" % num_elems)

while num_elems != 0:
    element = int(input())
    stack.append(element)
    num_elems -= 1

print("Starting stack: ")
print(stack)

print("What would you like to do?")

command = input("Commands: append pop exit\n")

while command != "exit":

    if command == "append":
        print("Initial stack")
        print(stack)
        print("Input the element you would like to append")
        elem = int(input())
        stack.append(elem)
        print("Updated stack")
        print(stack)
