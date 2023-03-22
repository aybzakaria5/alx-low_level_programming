#include "main.h"

/**
 *print_sign - prints if n is greater than 0 or if n is 0 or is less than 0
 * @n: takes intreger type for the function
 * Return: 1 if + , 0 if 0, -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
