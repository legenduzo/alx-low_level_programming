#!/usr/bin/python3
"""
Calculatest the perimeter of an island
"""
def island_perimeter(grid):
    """
    Calculates island perimeter

    Arg:
    grid (list of int lists): grid to use to calculate
    """
    cells = 0
    for lst in range(len(grid)):
        for i in range(lst):
            if i:
                cells += 1
                if (grid[lst - 1][i] or grid[lst + 1][i]
                    and grid[lst][i + 1] or grid[lst][i - 1]):
                    cells += 1
    return (cells)
