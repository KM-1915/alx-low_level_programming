#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by your alloc_grid
 * @grid: address of the two dimensional grid
 * @height: grid height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int n;

	if (grid == NULL)
		return;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
