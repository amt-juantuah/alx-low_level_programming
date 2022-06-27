#include <stdio.h>
#include <stdlib.h>

/**
 * main -  adds positive numbers
 * @argc: int type argument
 * @argv: char variable argument
 *
 * Return: 1 (or 0 on success)
 */

int main(int argc, char *argv[])
{
	int res, i, j;

	res = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
				{
					continue;
				}
				else
				{
					printf("Error\n");
					exit(EXIT_FAILURE);
				}
			}
			res += atoi(argv[i]);
		}
	}
	printf("%d\n", res);
	exit(EXIT_SUCCESS);
}
