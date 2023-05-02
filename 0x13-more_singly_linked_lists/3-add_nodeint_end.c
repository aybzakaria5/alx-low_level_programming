#include "lists.h"

/**
 *add_nodeint_end - a funcxtion that adds a node at the end of a list
 *@head: a double pointer to the first node
 *@n: the element we want to add
 *Return: returns the adress of the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *temp;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new;
	return (new);
}
