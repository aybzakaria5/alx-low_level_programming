#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index of a doubly lniked list
 * @head: head of the linked list
 * @index: index to delete
 * Return: 1 (success) | -1 (failed)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *tmp = *head;

	while (tmp != NULL)
	{
		if (count == index)
		{
			if (index == 0 && tmp->next)
			{
				*head = tmp->next;
				(*head)->prev = NULL;
			}
			else if (index == 0 && tmp->next == NULL)
			{
				*head = NULL;
			}
			else
			{
				if (tmp->prev)
					tmp->prev->next = tmp->next;
				else
					tmp->next->prev = NULL;
				if (tmp->next && tmp->prev)
					tmp->next->prev = tmp->prev;
				else
				{
					if (tmp->prev)
						tmp->prev->next = NULL;
				}
			}
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		count++;
	}
	return (-1);
}
