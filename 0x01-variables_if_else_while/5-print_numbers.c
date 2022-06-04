#include <stdio.h>

/**
 * main - prints all single digit numbers starting from 0
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');

	return (0);
}
