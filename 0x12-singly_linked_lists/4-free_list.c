#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list -  frees a list_t list
 * @head: first node
 */

void free_list(list_t *head)
{
	list_t *fillin;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		fillin = head->next;
		free(head->str);
		free(head);
		head = fillin;
	}
	free(head->str);
	free(head);
}
