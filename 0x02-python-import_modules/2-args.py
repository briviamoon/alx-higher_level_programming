#!/usr/bin/python3
import sys

argc = len(sys.argv) - 1

if argc == 0:
    print("0 arguments.")
elif argc == 1:
    print("1 argument:")
else:
    print("{} arguments:".format(argc))

for arg in range(argc):
    print("{}: {}".format(arg + 1, sys.argv[arg + 1]))
