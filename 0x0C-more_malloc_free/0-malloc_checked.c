#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int argument
 * Return: None
 */

void *malloc_checked(unsigned int b)
{
	int *tmp = NULL;

	tmp = malloc(b);
	if (tmp == NULL)
	{
		exit(98);
	}
	return (tmp);
}
