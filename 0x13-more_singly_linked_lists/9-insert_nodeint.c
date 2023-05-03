#include "lists.h"

/**
 *insert_nodeint_at_index - a function that inserts new node at given position
 *@head: pointer
 *@idx: where the new node must added
 *@n: data of hte new node
 *Return: returns the adress of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new = malloc(sizeof(listint_t)), *tmp;

	tmp = *head;

	if (!head)
		return (NULL);

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (tmp != NULL && count < idx - 1)
	{
		tmp = tmp->next;
		count++;
	}

	if (tmp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
