#include "main.h"

/**
 *print_most_numbers - prints from 0 to 9  except for 2&4
 *
 */

void print_most_numbers(void)
{
	int nmbr = 48;

	while (nmbr <= 57)
	{
		if (nmbr != 50 || nmbr != 52)
		{
			_putchar(nmbr);
		}
		nmbr++
	}
	_putchar('\n');
}
