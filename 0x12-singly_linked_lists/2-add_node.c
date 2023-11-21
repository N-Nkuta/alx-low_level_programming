#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: first node
 * @str: string to be duplicated
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *addednode;
	unsigned int u, holder = 0;

	addednode = malloc(sizeof(list_t));

	if (addednode == NULL)
		return (NULL);

	addednode->str = strdup(str);
	for (u = 0; str[u] != '\0'; u++)
		holder++;
	addednode->len = holder;
	addednode->next = *head;
	*head = addednode;
	return (*head);
}
