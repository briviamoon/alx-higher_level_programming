#!/usr/bin/python3

def print_reversed_list_integer(my_list=[]):
    count = 0
    for thing in my_list:
        count += 1

    for thing in range(count - 1, -1, -1):
        print("{}".format(my_list[thing]))
