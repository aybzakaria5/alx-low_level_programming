#include "lists.h"

/**
 *listint_len - a functino that counts the elements of a list
 *@h: a pointer to the frist nide
 *Return: returns the hunmber of elements
 */

size_t listint_len(const listint_t *h)
{
	int elem = 0;

	while (h)
	{
	h = h->next;
	elem++;
	}
	return (elem);
}
