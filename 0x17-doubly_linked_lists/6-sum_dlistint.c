#include "lists.h"

/**
 * sum_dlistint - sum data of doubly lniked list
 * @head: head of the linked list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
