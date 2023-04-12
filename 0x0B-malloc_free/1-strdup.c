#include "main.h"
#include<stdlib.h>

/**
 *_strdup - a function that copies a string by returnin a pointer to it
 *@str: the string
 *Return: retruns the pointer if success NULL if not
 */

char *_strdup(char *str)
{
	int size, i = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}
	dup = malloc(sizeof(*str + 1) * size);
		if (dup == NULL)
		{
			return (NULL);
		}
		else
		{
			for (; i < size; i++)
			*(dup + i) = *(str + i);
		}
	return (dup);
}
