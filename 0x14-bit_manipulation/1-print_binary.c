#include "main.h"

/**
 *print_binary - a function that prints binary
 *@n: the input number
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int Sbit = 1;
	int i = 0;

	while (Sbit <= n)
	{
		Sbit <<= 1;
		i++;
	}

	if (Sbit > n)
		Sbit >>= 1;
	else
		i--;

	if (!n)
		_putchar('0');

	while (Sbit)
	{
		_putchar((n & Sbit) ? '1' : '0');
		Sbit >>= 1;
	}
}
