#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: first node
 * @str: string to be duplicated
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *addednode, *fillin;
	unsigned int u, holder = 0;

	addednode = malloc(sizeof(list_t));

	if (addednode == NULL)
		return (NULL);

	addednode->str = strdup(str);
	for (u = 0; str[u] != '\0'; u++)
		holder++;
	addednode->len = holder;
	addednode->next = NULL;
	fillin = *head;

	if (fillin == NULL)
		*head = addednode;
	else
	{
		while (fillin->next != NULL)
			fillin = fillin->next;
		fillin->next = addednode;
	}
	return (*head);
}
