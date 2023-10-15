#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: parameter that needs to be checked
 * Return: to be 1 or  0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
