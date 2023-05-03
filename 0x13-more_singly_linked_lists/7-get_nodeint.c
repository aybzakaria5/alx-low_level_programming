#include "lists.h"

/**
 *get_nodeint_at_index - a function that returns nth node
 *@head: pointer
 *@index: nth node
 *Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (!head)
		return (NULL);

	for (; n < index; n++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
