#include "main.h"
#include<stdlib.h>
/**
 *create_array - a function that creates an array of charcaters
 *@size: the size of the array
 *@c: the character we starting the string with
 *Return: returns the pointer to the array if succes , NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size > 0)
	{
		s = (malloc(sizeof(char) * size));
		if (s != NULL)
		{
			for (i = 0; i < size; i++)
			{
				s[i] = c;
			}
		}
		else
		{
			return (NULL);
		}
	return (s);
	}
	return (NULL);
}

