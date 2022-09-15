#!/usr/bin/python3
'''Island Perimeter Interview'''


def island_perimeter(grid):
    '''Calculates the permeter of a gridlike island'''
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i != 0:
                    n = grid[i - 1][j]
                else:
                    n = 0
                if j != len(grid[i]) - 1:
                    e = grid[i][j + 1]
                else:
                    e = 0
                if i != len(grid) - 1:
                    s = grid[i + 1][j]
                else:
                    s = 0
                if j != 0:
                    w = grid[i][j - 1]
                else:
                    w = 0
                perimeter += check_surroundings(n, e, s, w)
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
