#!/usr/bin/python3
def update_dictionary(a_dictionary, key, value):
    new_dict = {k: value if k == key else v for k, v in a_dictionary.items()}

    if key not in a_dictionary:
        new_dict[key] = value
    return new_dict
