#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 */

int main(void)
{
	char lo;
	char hi;

	for (lo = 'a'; lo <= 'z'; lo++)
		putchar(lo);
	for (hi = 'A'; hi <= 'Z'; hi++)
		putchar(hi);
	putchar('\n');
	return (0);
}
