#!/usr/bin/python3

def no_c(my_string):
    filtered_string = ''.join(char for char in my_string
                              if char.lower() not in {'c'})
    return (filtered_string)
