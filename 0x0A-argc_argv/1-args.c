#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it 
 * @argc: int type argument
 * @argv: char variable argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
