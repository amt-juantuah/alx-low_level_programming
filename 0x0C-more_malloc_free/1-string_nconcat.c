#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string argument
 * @s2: second string argument
 * Return: Null or Pointer of memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tmp = NULL;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > sizeof(s2) - 1)
		n = sizeof(s2) - 1;
	tmp = malloc(sizeof(s1) + n);
	if (tmp == NULL)
		return (NULL);
	for (i = 0; i < sizeof(s1) - 1; i++)
		tmp[i] = s1[i];
	for (i = 0; i < n; i++)
		tmp[(sizeof(s1) - 1) + i] = s2[i];
	return (tmp);
}
