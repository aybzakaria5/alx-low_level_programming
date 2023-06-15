#include "lists.h"

/*
 *  dlistint_len - Check number of elemenys in a list.
 *   @h: Pointer to header of list
 *
 *   Return: Number of elements in list.
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t num = 0;
	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
