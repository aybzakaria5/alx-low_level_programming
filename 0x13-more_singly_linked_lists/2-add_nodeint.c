#include "lists.h"

/**
 *add_nodeint - a fucntion that adds a node
 *@head: double pointer to the first node
 *@n: the element we want to add
 *Return: returns the adress of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
