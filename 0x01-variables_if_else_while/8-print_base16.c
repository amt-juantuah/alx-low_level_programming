#include <stdio.h>

/**
 * main - Prints numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char num = '0';
	char ch = 'a';

	for (; num <= '9'; num++)
		putchar(num);
	for (; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
