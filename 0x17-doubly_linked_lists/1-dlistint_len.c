#include "lists.h"

/**
 * dlistint_len - number of elements in a linked list
 * @h: pointer to the header
 *
 * Return: the number of nodes
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