#include <stdio.h>

/**
 * main - print lowercase in reverse
 *
 * Return: 0
 */

int main(void)
{
	char ch = 'z';

	for (; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
