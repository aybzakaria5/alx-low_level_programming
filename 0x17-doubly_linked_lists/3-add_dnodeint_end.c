#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of doubly lniked list
 * @head: head of the linked list
 * @n: data value
 * Return: adress of new element | NULL (failed)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
		newnode->prev = NULL;
		if (temp != NULL)
		{
			while (temp)
			{
				if ((temp)->next == NULL)
					break;
				temp = (temp)->next;
			}
			(temp)->next = newnode;
			newnode->prev = temp;
		}
		else
			*head = newnode;
		return (newnode);
	}
	return (NULL);
}
