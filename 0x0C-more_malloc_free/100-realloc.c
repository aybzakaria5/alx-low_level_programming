#include"main.h"
#include<stdlib.h>
/**
 *_realloc - afunction that reallocate a previous memory
 *@ptr: the pointer to the old memory
 *@old_size: the old size of the old memory
 *@new_size: the new size of the new memory allocated
 *Return:  returns a pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *m;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size > old_size)
	{
		m = malloc(new_size);
		if (m == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < old_size && i < new_size; i++)
		{
			*((char *)m + i) = *((char *)ptr + i);
		}
		free(ptr);
	}
	return (m);
}

