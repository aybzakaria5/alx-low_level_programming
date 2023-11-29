#!/usr/bin/env python3
""" a file that contains a function that returns
the perimeter of an island
"""


def island_perimeter(grid):
    """a function that calculates the perimeter
    based on a given grid

    Args:
        grid (list): a list of 0 and 1 , where 0 represents
        water and 1 represents land

    Returns:
        perimeter: the perimeter of the given grid
    """
    if not grid or not grid[0]:
        return 0

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

    return perimeter
