#include "main.h"

/**
 * _strpbrk - a function that searches for any of a set of bytes
 *@s: frist occurrence in the string
 *@accept: matches one of the bytes
 * Return: returns a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[i] == accept[i])
			{
				return (s + i - 1);
			}
		}
	}
	return ('\0');
}
