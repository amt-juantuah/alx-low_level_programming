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
	int *p
	int i, j;

	if (!(width > 0) || !(height > 0))
		return (NULL);

	matrix = (int **)malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(matrix + i) = (int *)malloc(sizeof(int *) * width);
		if (*(matrix + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = matrix[i];
				free(p);
			}
			free(matrix);
			return (NULL)
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	return (matrix);
}
