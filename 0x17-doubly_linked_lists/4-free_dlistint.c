#include "lists.h"

/**
 * free_dlistint - free a doubly lniked lists
 * @h: head of the linked list
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *temp = h;

	while (h != NULL)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
}
