#include "main.h"

/**
 *_memset - a function that fills the first n bites with the const b
 * @s: pointer to the memory area
 * @b: a byte to fill  the 's' n times
 * @n: the input number of the bites we wanna fill 's' with 'b'
 *Return: returns a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
	{
		*(p + i) = b;/**note that s[i] == *(p + i)*/
	}
	return (s);
}
