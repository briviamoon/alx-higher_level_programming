#!/usr/bin/python3

import calculator_1
import sys
if __name__ == "__main__":
    argc = len(sys.argv) - 1

    if argc != 3:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        exit(1)

    a = int(sys.argv[1])
    b = int(sys.argv[3])

    opperations = {"+": calculator_1.add, "-": calculator_1.sub,
                   "*": calculator_1.mul, "/": calculator_1.div}
    if sys.argv[2] not in list(opperations.keys()):
        print("Unknown operator, Available operators: +, -, * and /")
        exit(1)

    print("{} {} {} = {}".format(a, sys.argv[2], b,
                                 opperations[sys.argv[2]](a, b)))
