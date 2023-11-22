#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: first node
 * @n: added number
 * Return: address of the newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addednode;
	listint_t *filler = *head;

	addednode = malloc(sizeof(listint_t));

	if (addednode == NULL)
		return (NULL);

	addednode->n = n;
	addednode->next = NULL;
	filler = *head;

	if (*head == NULL)
	{
		*head = addednode;
	}
	else
	{
		while (filler->next != NULL)
			filler = filler->next;

		filler->next = addednode;
	}

	return (*head);
}
