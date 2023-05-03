#include "lists.h"

/**
 *free_listint - a function that fress a list
 *@head: pointer to the list
 *
 */

void free_listint(listint_t *head)
{
	litsint_t *new;

		while (head)
		{
			emp = head->next;
			free(head);
			head = tmp;
		}
		head = NULL;
}
