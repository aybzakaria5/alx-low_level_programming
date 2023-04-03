#include "main.h"
/**
 *_strspn - a function that gets the length of a prefix substrign
 *@s: intituial segment
 *@accept: the string that contains the prefix
 *Return: returns the number of bytes in s wich consists only bytes from accept
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int len = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					len++;
			}
		}
		else
			return (len);
	}
	return (len);
}

