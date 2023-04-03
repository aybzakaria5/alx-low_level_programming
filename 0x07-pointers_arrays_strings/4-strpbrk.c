#include "main.h"

/**
 * _strpbrk - a function that searches for any of a set of bytes
 *@s: frist occurrence in the string
 *@accept: matches one of the bytes
 * Return: returns a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
