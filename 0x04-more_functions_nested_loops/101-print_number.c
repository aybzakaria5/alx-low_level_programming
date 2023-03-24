#include "main.h"

/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{
	unsigned int N = n;

	if (n < 0)
	{
		_putchar(45);
		N = -N;
	}

	if ((N / 10) > 0)
		print_number(N / 10);
	_putchar((N % 10) + 48);
}

