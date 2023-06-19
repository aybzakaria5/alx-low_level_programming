#include "main.h"


/**
 *_memcpy - a function that copies a memory area from dest to src by 'n' bytes
 *@src:the src we wanna copy from
 *@dest:the destination we wanna copy to
 *@n:the number input of how many we want to copy from memory area src to dest
 *Return: returns a pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
