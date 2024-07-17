#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a copy of the string
 * given as a parameter.
 * @str: string to be duplicated
 * Return: a pointer to newly allocated space.
 * It returns NULL if memory was insufficient
 */

char *_strdup(char *str)
{
	unsigned int i, size;
	char *pCOPY; /*pCopy refers to pointer of duplicate*/

	if (str == NULL)
	{
		return (NULL);
	}

	size = 0;
	for (i = 0; str[i]; i++)
	{
		size++;
	}

	pCOPY = malloc(++size);
	if (pCOPY == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		pCOPY[i] = str[i];
	}
	return (pCOPY);
	free(pCOPY);
}
