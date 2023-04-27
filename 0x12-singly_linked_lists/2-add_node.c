#include "lists.h"

/**
 *add_node - a function that adds a new node at the begginging
 *@head: double pointer to the linked list
 *@str: the string
 *Return: returns the adress of the new node or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	int len_str = 0;
	list_t *head_0;

	head_0 = malloc(sizeof(list_t));

	while (str[len_str])
		len_str++;

	if (!head_0)
		return (NULL);
	head_0->str = strdup(str);
	head_0->len = len_str;
	head_0->next = *head;
	*head = head_0;
	return (head_0);
}
