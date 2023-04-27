#include "lists.h"

/**
 *list_len - a fucntion that finds the lenght of a linked list
 *@h: a pointer to the first node
 *Return: returns the size of the linked list
 */

size_t list_len(const list_t *h)
{
	size_t n_elem = 0;
	while (h)
	{
		h = h->next;
		n_elem++;
	}
	return (n_elem);
}
