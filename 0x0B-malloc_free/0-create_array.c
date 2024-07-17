#include "main.h"

/**
 * create_array - function that creates an array of chars
 * and it also initializes it with a specific char
 * @size: size of array
 * @c: character to be initialized
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *pARR;

	if (size == 0)
		return (NULL);

	pARR = malloc(sizeof(char) * size);

	if (pARR == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		pARR[i] = c;
	return (pARR);
}
