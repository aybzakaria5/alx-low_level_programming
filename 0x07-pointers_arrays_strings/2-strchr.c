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

	while (*s != '\0')
		{
			if (*s == c)
			return (s);
			s++;
		}
	return(NULL);
}
