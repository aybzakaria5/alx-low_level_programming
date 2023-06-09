#include "main.h"

/**
 *flip_bits -  a function that filips bites
 *@n: the input
 *@m: the second input
 *Return: returns the number of bits we flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR;
	int nflips = 0;

	XOR = n ^ m;

	while (XOR)
	{
		if (XOR & 1)
			nflips++;

		XOR >>=  1;
	}
	return (nflips);
}
