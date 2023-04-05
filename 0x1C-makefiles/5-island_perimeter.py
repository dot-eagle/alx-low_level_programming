#!/usr/bin/python3
"""returns the perimeter of the island described in grid(int list of list)"""


def island_perimeter(grid):
    """Return the island perimeter"""
    wd = len(grid[0])
    ht = len(grid)
    edges = 0
    size = 0

    for y in range(ht):
        for z in range(wd):
            if grid[y][z] == 1:
                size += 1
                if (z > 0 and grid[y][z - 1] == 1):
                    edges += 1
                if (1 > 0 and grid[y - 1][z] == 1):
                    edges += 1
    pm = (size * 4 - edges * 2)
    return (pm)
