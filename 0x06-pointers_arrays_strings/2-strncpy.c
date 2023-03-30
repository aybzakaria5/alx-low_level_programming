#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The destination string
 * @src: The source string.
 * @n: The maximum number of bytes
 *
 * Return: returns a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i])
		i++;
	for (j = 0; src[j] && j < n; j++)
		dest[j] = src[j];
	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
