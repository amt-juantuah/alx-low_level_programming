#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, with argv
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
