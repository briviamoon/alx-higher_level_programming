#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    orderedKeys = sorted(a_dictionary.keys())
    ordered_dictionary = {key: a_dictionary[key] for key in orderedKeys}

    for key, value in ordered_dictionary.items():
        print("{}: {}".format(key, value))
