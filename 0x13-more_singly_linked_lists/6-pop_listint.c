#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: first node
* Return: data of deleted node
*/

int pop_listint(listint_t **head)
{
	int i;
	listint_t *fillin;

	if (head == NULL || *head == NULL)
		return (0);
	i = (*head)->n;
	fillin = *head;
	*head = (*head)->next;
	free(fillin);

	return (i);
}
