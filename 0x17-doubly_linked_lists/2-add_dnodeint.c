#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of doubly lniked list
 * @head: head of the linked list
 * @n: the data value in a linked list
 * Return: adress of new element | NULL (failed)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
		newnode->prev = NULL;
		if (*head != NULL)
		{
			newnode->next = *head;
			(*head)->prev = newnode;
		}
		*head = newnode;
		return (newnode);
	}
	return (NULL);
}
