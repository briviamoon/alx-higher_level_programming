#!/usr/bin/python3
def square_matrix_map(matrix=[]):
    if not matrix:
        return 0
    else:
        new = list(map(lambda row: list(map(lambda x: x ** 2, row)), matrix))
        return new
