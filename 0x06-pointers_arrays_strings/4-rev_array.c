#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array
 * @n:  the number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0 ; b < n / 2 ; b++)
	{
		c = a[b];
		a[b] = a[n - 1 - b];
		a[n - 1 - b] = c;
	}
}
