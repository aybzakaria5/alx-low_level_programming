#include "main.h"
#include<stdlib.h>
/**
 * malloc_checked - function that creates an array of chars,
 *  and initializes it with a specific char
 * @b: input
 * Return: returns  a pointer to the array if 1 or exit 98 if fail
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
