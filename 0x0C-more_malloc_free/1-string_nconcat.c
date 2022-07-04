#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string argument
 * @s2: second string argument
 * @n: number that shows length of s2 to be printed
 * Return: Null or Pointer of memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tmp = NULL;
	unsigned int i;
	unsigned int j = 0;
	unsigned int k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[j] != '\0')
		j++;
	while (s2[k])
		k++;

	if (n > k)
		n = k;
	tmp = malloc(sizeof(char) * (j + n + 1));
	if (tmp == NULL)
		return (NULL);

	for (i = 0; i < j + 1; i++)
		tmp[i] = s1[i];
	for (i = 0; i < n; i++)
		tmp[j + i] = s2[i];
	return (tmp);
}
