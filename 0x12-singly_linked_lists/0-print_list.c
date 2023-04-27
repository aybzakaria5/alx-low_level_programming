#include "lists.h"

/**
 *print_list - aprints all the lements of the linked lists
 *@h: pointer the first nood from the linked list
 *Return: returns the numbers of noods
 */
size_t print_list(const list_t *h)
{
	size_t n_nood = 0;

	while (h)
	{
		printf("[%u] %s\n", h->len, (h->str ? h->str : "(nil)"));
				h = h->next;
				n_nood++;
	}
	return (n_nood);
}
