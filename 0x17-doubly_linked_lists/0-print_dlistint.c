#include"lists.h"

/**
 * print_dlistint - prints all the elements in a linked list.
 * @h: head of a linked list
 * 
 * Return: NUmber of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
    size_t elem = 0;

    while (h)
    {
        elem++;
        printf("%d\n", h->n);
        h = h->next;
    }

    return (elem);
}