#include "main.h"

/**
 * str_concat - function that concatenates or joins two strings
 * @s1: first string 
 * @s2: second  string
 * Return: pointer to newly allocated space
 * Should return null on failure
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int i;
	char *pOutput;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1len++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		s2len++;
	}

	pOutput = malloc(sizeof(char) * (s1len + s2len) + 1);
	if (pOutput == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		pOutput[i] = s1[i];
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		pOutput[s1len + i] = s2[i];
	}
	return (pOutput);
}
