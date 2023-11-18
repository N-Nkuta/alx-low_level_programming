#include "main.h"
/**
 * _memset - constant byte filled in this memory
 * @s: memory to be filled
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (n = 0 ; a < n ; a++)
		s[a] = b;
	return(s);
}
