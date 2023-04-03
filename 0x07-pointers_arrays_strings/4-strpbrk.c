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

	while (s[i] != '\0')

	{
		for (j = 0; accept[j] != '\0'; i++)
		{
			if (s[i] == accept[j])
				return (s + i -1);
			j++;
		}
		i++;
	}
	return ('\0');
}
