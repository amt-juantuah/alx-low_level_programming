#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: integer argument
 * @height: integer argument
 * Return: 2d Array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **matrix = NULL;
	int i, j;

	if (!(width > 0) || !(height > 0))
		return (NULL);

	matrix = malloc(sizeof(int) * (width * height));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	return (matrix);
}
