#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: to be 0
 */

int main(void)
{
	int n;
	char d;

	for (n = 0 ; n < 10 ; n++)
		putchar (n + '0');
	for (d = 'a' ; d <= 'f' ; d++)
		putchar (d);
	putchar('\n');
	return (0);
}
