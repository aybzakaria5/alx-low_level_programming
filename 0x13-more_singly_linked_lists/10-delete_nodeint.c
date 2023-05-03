#include "lists.h"

/**
 *delete_nodeint_at_index - a function that delets anode
 *@head: pointer
 *@index: the index to delet a node at
 *Return: returns 1 if succes -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *no;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		no = (*head)->next;
		free(*head);
		*head = no;
		return (1);
	}

	tmp = *head;
	for (; i < index - 1; i++)
	{
		if (tmp->next == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
	}
	no = tmp->next;
	tmp->next = no->next;
	free(no);
	return (1);
}
