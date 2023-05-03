#include "lists.h"

/**
 *pop_listint  - a function that delets the head of a node
 *@head: pointer
 *Return: head's node data (n)
 */

int pop_listint(listint_t **head)
{
	int list_data;
	listint_t *temp;

	if (*head ==  NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	list_data = temp->n;
	free(temp);
	temp = NULL;
	return (list_data);
}
