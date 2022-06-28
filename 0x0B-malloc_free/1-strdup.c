#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns memory with a copy of string argument
 * @str: string
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
