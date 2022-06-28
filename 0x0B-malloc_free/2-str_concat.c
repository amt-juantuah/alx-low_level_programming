#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string argument
 * @s2: second string argument
 * Return: NULL or concat strings
 */

char *str_concat(char *s1, char *s2)
{
	char *conct = NULL;
	int i;
	int m = 0;
	int n = 0;

	if (s1 != NULL && s2 != NULL)
	{
		while (s1[n] != '\0')
			n++;
		n++;

		while (s2[m] != '\0')
			m++;
		m++;
		conct = malloc(sizeof(char) * (m + n - 1));

		if (conct == NULL)
			return (NULL);

		for (i = 0; i < n; i++)
			conct[i] = s1[i];
		for (i = 0; i < m; i++)
			conct[n - 1 + i] = s2[i];

		return (conct);
	}
	return (NULL);
}
