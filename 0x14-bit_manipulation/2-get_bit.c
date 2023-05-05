#include "main.h"

/**
 *get_bit - a fucntion that returns the value of a bit at index
 *@n: the input number
 *@index: the index
 *Return: the value at the index or -1 if fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	mask <<= index;

	return ((index > 64) ? (-1) : ((mask & n) ? 1 : 0));
}
