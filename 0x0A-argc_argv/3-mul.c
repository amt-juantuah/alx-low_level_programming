#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: int type argument
 * @argv: char variable argument
 *
 * Return: 1 (or 0 on success)
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
		exit(EXIT_SUCCESS);
	}
	printf("Error\n");
	exit(EXIT_FAILURE);
}
