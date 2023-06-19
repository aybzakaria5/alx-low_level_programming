#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The string to append to
 * @src: The string to append
 * Return: Pointer to resulting string
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;

	for (j = 0; src[j]; j++)
		dest[i++] = src[j];

	return (dest);
}
