#!/usr/bin/python3

from sys import argv

if __name__ == "__main__":
    argc = len(argv) - 1

    if argc == 0:
        print("0 arguments.")
    elif argc == 1:
        print("1 argument:")
    else:
        print("{} arguments:".format(argc))

    for arg in range(argc):
        print("{}: {}".format(arg + 1, argv[arg + 1]))
