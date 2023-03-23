#include "main.h"

/**
 * print_square - Print a square
 * @size: Size of square
 *
 */

void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

	for (row = 1; row <= size; row++)
		{
		for (col = 1; col <= size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}
