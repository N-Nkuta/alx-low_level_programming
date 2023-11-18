#include "main.h"

/**
 * _strspn - gets length of substring
 * @s: number of bytes
 * @accept: length to be calculated
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int n, a;

	for (n = 0 ; s[n] != '\0' ; n++)
	{
		for (a = 0 ; s[n] != accept[a] ; a++)
		{
			if (accept[a] == '\0')
				return (n);
		}
	}
	return (0);
}
