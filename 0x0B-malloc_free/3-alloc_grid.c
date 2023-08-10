#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: NULL on failure, or if width and height = 0
 * or are negative, else returns poiter to 2D array of int
 */
int **alloc_grid(int width, int height)
{
	int **grid, n, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < height; n++)
	{
		grid[n] = (int *)malloc(width * sizeof(int));
		if (grid[n] == NULL)
		{
			for (i = 0; i < n; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		for (i = 0; i < width; i++)
		{
			grid[n][i] = 0;
		}
	}
	return (grid);
}
