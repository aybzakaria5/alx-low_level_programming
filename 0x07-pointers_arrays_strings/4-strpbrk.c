#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - a function that searches for any of a set of bytes
 *@s: frist occurrence in the string
 *@accept: matches one of the bytes
 * Return: returns a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)

	{
		for (i = 0; (*(accept + i)); i++)
		{
			if (*s == *(accept +i))
				return (s);
		}
		s++;
	}
	return (NULL);
}
