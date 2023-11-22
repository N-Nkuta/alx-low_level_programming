#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: first node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		sum++;
		h = h->next;
	}
	return (sum);
}
