#include <stdio.h>
#include <stdlib.h>

/**
 * main - creates array of chars, initializes it with a specific char
 * @size: size of array
 * @c: character
 *
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	
	if (size > 0)
	{
		array = malloc(sizeof(*array) * size);
		if (array == NULL)
		{
			return NULL;
		}
		array = c;
		return (array);
	}
	return NULL;
}
