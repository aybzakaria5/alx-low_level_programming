#include "main.h"

/**
  * _strncat - Concatenates two strings
 *@dest: the rstring to be appended upon
 *@src: the string to be appended to dest
 *@n: the number of bytes from src to be appended to dest
 * Return: a pointer the rseulting string dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;

	for (j = 0; src[j] && j < n; j++)
		dest[i++] = src[j];

	return (dest);
}
