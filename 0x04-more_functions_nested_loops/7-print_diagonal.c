#include "main.h"

/**
 * print_diagonal - Draw a diagonal line
 * @n: Number of times to print /
 *
 */

void print_diagonal(int n)
{
	int pos, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pos = 0; pos <= n; pos++)
		{
			for (space = 1; space <= pos; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
