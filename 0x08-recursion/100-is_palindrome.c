#include "main.h"

/**
 * is_palindrome- says if a string is a palindrome or not
 * @s: string to be evaluated
 * Return: 1 if string is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (s <= 1)
		return (0);
	return (functional_palindrome(s, s-1));
}

/**
 * functional_palindrome - calculates if string is a palindrome recursively
 * @s: string to be evaluated
 * @a: compared string
 * Return: 1 if string is a palindrome, 0 if not
 */

int functional_palindrome(int s, int a)
{
	if (a == 1)
		return (1);
	if (s % a == 0 && a > 0)
		return (0);
	return (functional_palindrome(s,a-1));
}
