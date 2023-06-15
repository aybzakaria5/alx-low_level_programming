#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer to the adress of head
 * @n: the number of element to add
 *
 * Return: adress of new element
 * NULL upon faillure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
        return (NULL);
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
}
