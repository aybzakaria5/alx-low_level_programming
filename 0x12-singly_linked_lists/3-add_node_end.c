#include "lists.h"

/**
 *add_node_end - a function that adds a node at the end of a linked list
 *@head: double pointer to the first node
 *@str: a string
 *Return: returns a pothe adress of the new elemnet added
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end = malloc(sizeof(list_t));
	list_t *node;
	int i = 0;

	while (str[i])
		i++;
	if (!node_end || !head)
		return (NULL);

	node_end->str = strdup(str);

	if (!node_end->str)
	{
		free(node_end);
		return (NULL);
	}
	node_end->len = i;
	node_end->next = NULL;
	
	if (*head == NULL)
	{
		*head = node_end;
		return (node_end);
	}

	node = *head;
	while (node->next)
		node = node->next;

	node->next = node_end;
	return (node_end);
}
