#!/usr/bin/python3
''' Function that calculates the perimeter of an island '''


def island_perimeter(grid):
    ''' Calculates the perimeter '''
    perimeter = 0
    for i in range(1, len(grid) - 1):
        for j in range(1, len(grid[i]) - 1):
            if (grid[i][j] == 1):
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
