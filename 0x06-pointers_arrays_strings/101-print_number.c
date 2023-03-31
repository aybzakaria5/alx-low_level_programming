#include "main.h"

/**
 * print_number - prints an integer
 * @n: the input integer
 */

void print_number(int n)

{
	unsigned int nm = n;

	if (n < 0)
	{
		_putchar('-');
		nm = -nm;
	}

	if ((nm / 10) > 0)
		print_number(nm / 10);
	_putchar((nm % 10) + '0');
}
