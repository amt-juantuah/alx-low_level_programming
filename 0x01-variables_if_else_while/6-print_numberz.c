#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 */

int main(void)
{
	int num = '0';

	for (; num <= '9'; num++)
		putchar(num);
	putchar('\n');

	return (0);
}
