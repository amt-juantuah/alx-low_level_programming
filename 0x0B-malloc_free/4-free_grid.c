#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid malloc function
 * @grid: matrix
 * @height: integer argument
 * Return: None
 */

void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
