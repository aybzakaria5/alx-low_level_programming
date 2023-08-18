#include "lists.h"

/**
 * insert_dnodeint_at_index - add a node at the index of doubly lniked list
 * @h: head of the linked list
 * @idx: index of the new node
 * @n: data value
 * Return: adress of new element | NULL (failed)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp = *h;
	unsigned int i = 0, len = dlistint_len(*h);

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp != NULL)
	{
		if (i == idx - 1)
			break;
		temp = temp->next;
		i++;
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (idx > len)
	{
		free(newnode);
		return (NULL);
	}
	if (len == idx)
		return (add_dnodeint_end(h, n));

	newnode->prev = temp;
	temp->next->prev = newnode;
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}

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
