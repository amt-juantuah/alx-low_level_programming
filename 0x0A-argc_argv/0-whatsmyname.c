#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, with argv
 * @argc: int type argument
 * @argv: char type pointer array argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 0)
	{
		printf("%s\n", argv[0]);
	}
	exit(EXIT_SUCCESS);
}
