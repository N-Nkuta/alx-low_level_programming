#include "main.h"
#include <string.h>

/**
 * _strncat -  a function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int a;

	for (a = 0 ; a < n && *src != '\0' ; a++)
	{
		dest[len + a] = src[a];
		src++;
	}
	dest[len + a] = '\0';
	return (dest);
}
