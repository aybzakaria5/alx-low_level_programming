#include "lists.h"

/**
 *free_listint2 - a function that frees a list and sets head to NULL
 *@head: double pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!*head)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
