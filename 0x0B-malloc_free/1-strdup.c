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
	int n = i = 0;

	if (str != NULL)
	{
		while (str[n] != '\0')
			n++;
		n++;
		str2 = malloc(sizeof(char) * n);
		if (str2 == NULL)
			return (NULL);
		for (i = 0; i < n; i++)
			str2[i] = str[i];

		return (str2);
	}
	return (NULL);
}
