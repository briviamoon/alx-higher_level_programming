#!/usr/bin/python3
import hidden_4

if __name__ == "__main__":
    thing = dir(hidden_4)

    filtered_thing = [name for name in thing if not name.startswith("__")]

    for name in sorted(filtered_thing):
        print("{}".format(name))
