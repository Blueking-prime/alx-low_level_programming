#!/usr/bin/python3
'''Island Perimeter Interview'''


def island_perimeter(grid):
    '''Calculates the permeter of a gridlike island'''
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                try:
                    n = grid[i - 1][j]
                except IndexError:
                    n = 0
                try:
                    e = grid[i][j + 1]
                except IndexError:
                    e = 0
                try:
                    s = grid[i - 1][j]
                except IndexError:
                    s = 0
                try:
                    w = grid[i][j - 1]
                except IndexError:
                    w = 0
                perimeter += check_surroundings(n, e, s, w)
            elif grid[i][j] == 0:
                continue
            else:
                return 0
    return perimeter

def check_surroundings(n, e, s, w):
    '''Checks all tiles around a land tile'''
    matches = 0
    if n == 0:
        matches += 1
    if e == 0:
        matches += 1
    if s == 0:
        matches += 1
    if w == 0:
        matches += 1
    return matches
