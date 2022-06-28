#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars, initializes it with a specific char
 * @size: size of array
 * @c: character
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size != 0)
	{
		array = (char *)malloc(sizeof(char) * size);
		if (array == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
		return (array);
	}
	return (NULL);
}
