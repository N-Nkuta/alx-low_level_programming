#include "lists.h"

/**
* free_listint2 - frees a listint_t list
* @head: first node
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *fillin;

	if (head == NULL || *head == NULL)
		return;

	while ((*head)->next != NULL)
	{
	fillin = (*head)->next;
	free(*head);
	*head = fillin;
	}
	free(*head);
	*head = NULL;
}
