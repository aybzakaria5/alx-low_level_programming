#include "main.h"

/**
 * print_triangle - Print a triangle
 * @size: The size of the triangle
 *
 */

void print_triangle(int size)
{
	int hight, base, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hight = 1; hight <= size; hight++)
		{
			for (base = 1; base <= (size - hight); base++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= hight; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}
