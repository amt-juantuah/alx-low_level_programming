#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars, initializes it with a specific char
 * @size: size of array
 * @c: character
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *strcopy = NULL;
	int i;
	int n = 0;

	if (str != NULL)
	{
		while (str[n] != '\0')
			n++;
		n++;
		strcopy = malloc(sizeof(char) * n);
		if (strcopy == NULL)
			return (NULL);
		for (i = 0; i < n; i++)
			strcopy[i] = str[i];

		return (strcopy);
	}
	return (NULL);
}
