#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int a, b, result;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			result = a * b;
			printf("%2d, ", result);
		}
		printf("\n");
	}
}
