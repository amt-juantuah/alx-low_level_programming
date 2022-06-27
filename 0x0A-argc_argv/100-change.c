#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 * @argc: int type argument
 * @argv: char variable argument
 *
 * Return: 1 (or 0 on success)
 */

int main(int argc, char *argv[])
{
	int res, first, second, third, fourth, fifth;
	int firstrem, secrem, thirdrem;


	if (argc != 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	else if (atoi(argv[1]) < 0)
	{
		res = 0;
	}
	else
	{
		first = atoi(argv[1]) / 25;
		firstrem = atoi(argv[1]) % 25;
		second = firstrem / 10;
		secrem = firstrem % 10;
		third = secrem / 5;
		thirdrem = secrem % 5;
		fourth = thirdrem / 2;
		fifth = thirdrem % 2;

		res = first + second + third + fourth + fifth;
	}
	printf("%d\n", res);
	exit(EXIT_SUCCESS);
}
