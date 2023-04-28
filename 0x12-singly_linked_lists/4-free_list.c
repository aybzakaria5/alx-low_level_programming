#include "lists.h"

/**
 *free_list - a function that frees a linked list
 *@head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != 0)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
	head = NULL;
}
