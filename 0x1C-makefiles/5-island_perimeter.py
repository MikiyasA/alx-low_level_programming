#!/usr/bin/python3
"""
The module that have island_perimeter method returns the perimeter of the island described in grid:

grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
"""


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid
    """
    perimeter = 0

    noRow = len(grid)

    if grid != []:
        noCol = len(grid[0])

    for a in range(noRow):
        for b in range(noCol):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == noRow or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == noCol or grid[a][b + 1] == 0:
                    perimeter += 1

    return (perimeter)
