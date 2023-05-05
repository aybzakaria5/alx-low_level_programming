#include "main.h"

/**
 *set_bit - a function that sets a bit at index
 *@n: a pointer to a number
 *@index: the index
 *Return: returns 1 if success -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int Sbit = 1;

	if (index <= 64)
	{
		Sbit<<= index;
		*n = Sbit | *n;
		return (1);
	}
	else
		return (-1);
}
