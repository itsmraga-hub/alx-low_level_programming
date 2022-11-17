#!/usr/bin/python3
""" Module containing island_perimeter function """


def island_perimeter(grid):
    """ Function that returns the perimeter of island described in grid """
    per = 0

    nrows = len(grid)

    if grid != []:
        ncolumns = len(grid[0])

    for a in range(nrows):
        for b in range(ncolumns):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    per += 1
                if (a + 1) == nrows or grid[a + 1][b] == 0:
                    per += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    per += 1
                if (b + 1) == ncolumns or grid[a][b + 1] == 0:
                    per += 1

    return per
