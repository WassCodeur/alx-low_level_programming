#!/usr/bin/python3
"""Solving a technical interview problem..."""


def island_perimeter(grid):
     """returns the perimeter of the island described in grid"""
    width = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                width += 1
    area = width + 1
    perimeter = 2 * area
    return perimeter
