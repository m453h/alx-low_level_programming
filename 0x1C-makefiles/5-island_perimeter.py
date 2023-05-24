#!/usr/bin/python3
"""Defines a function for calculating perimeter of an island"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in a grid.

    Args:
        grid: A list of lists of integers

    Returns:
        (int) - The perimeter of the island.
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if (j != 0 and grid[i][j - 1] == 1):
                    perimeter -= 2
                if (i != 0 and grid[i - 1][j] == 1):
                    perimeter -= 2

    return perimeter
