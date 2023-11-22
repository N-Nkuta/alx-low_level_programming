#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: first node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t sumup;

	if (h == NULL)
		return (0);
	for (sumup = 0; h != NULL; sumup++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (sumup);
}
