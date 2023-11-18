#include "main.h"

/**
 * _memcpy - copies the area of memory
 * @dest: destination location
 * @src: source location
 * @n: number of copied bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
		dest[a] = src[a];
	return (dest);
}
