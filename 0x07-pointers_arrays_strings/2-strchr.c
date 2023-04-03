#include "main.h"
#include<stddef.h>
/**
 * _strchr - a function that locates a charcter in a string
 * @s: the string we are looking in for c
 * @c:  the charcter that we are lokking for at the tsring s
 *Return: returns a pointer the first occurence to c
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s+i);
	}	
	
	return ('\0');
}
