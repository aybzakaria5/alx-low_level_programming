#include "lists.h"

/**
 *sum_listint - a function that sums all data of a list
 *@head: pointer
 *Return: returns the sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
