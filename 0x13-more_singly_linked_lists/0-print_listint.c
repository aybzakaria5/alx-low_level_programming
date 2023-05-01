#include "lists.h"

/**
 *print_listint - a function that prints all the elements of the list
 *@h: the pointer ot the first node
 *Return: returns the numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h)
	{
	printf("%d\n", h->n);
		node++;
	h = h->next;
	}
	return (node);
}
