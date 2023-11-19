#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be square rooted
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n));
}

/**
 * _functional_sqrt_recursion - recursive function
 * @n: number to be square rooted
 * @a: number to be compared
 * Return: square root
 */

int _functional_sqrt_recursion(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (a);
	}
		return (_sqrt_recursion(n + 1));
}
