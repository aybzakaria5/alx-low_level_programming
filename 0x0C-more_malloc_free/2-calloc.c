#include "main.h"
#include<stdlib.h>

/**
 *_calloc - a function that allocates a memory initialized wiht 0
 *@size: the size of bytes
 *@nmemb: the number of elements
 *Return: returns a pointer the memory allocated if true null if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *m;

	if (size == 0 || nmemb == 0)
		return (NULL);

	m = malloc(nmemb * size);

	if (m != 0)
	{
		for (i = 0; i < nmemb * size; i++)
		{
			m[i] = 0;
		}
		return (m);
	}
	return (NULL);
}
