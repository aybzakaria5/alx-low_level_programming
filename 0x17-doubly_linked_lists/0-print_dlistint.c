#include "lists.h"

/**
 * print_dlistint - print all the elements in a linked list.
 * @h:  head of linked list
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t item = 0;

	while (h)
	{
		item++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (item);
}