#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: to be 0
 */

int main(void)
{
	int n;
	int i;

	for (n = 0 ; n <= 9; n++)
	{
		for (i = 0 ; i <= 9 ; i++)
		{
			putchar((n % 10) + '0');
			putchar((i % 10) + '0');
			if (n == 8 && i == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
