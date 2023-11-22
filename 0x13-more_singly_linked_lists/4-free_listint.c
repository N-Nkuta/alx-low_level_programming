#include "lists.h"

/**
 * free_listint -  frees a list_t list
 * @head: first node
 */

void free_listint(listint_t *head)
{
	listint_t *fillin;

	while (head != NULL)
	{
		fillin = head;
		fillin = head->next;
		free(fillin);
	}
}
