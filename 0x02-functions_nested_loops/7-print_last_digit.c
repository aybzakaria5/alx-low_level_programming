#include "main.h"

/**
 *print_last_digit - print last digit of a num
 *@n: input
 *Return: lstdgt
 */

int print_last_digit(int n)
{
	int lstdgt;

	if (n < 0)
		lstdgt = -1 * (n % 10);
	else
		lstdgt = n % 10;
	_putchar(lstdgt + '0');
	return (lstdgt);
}
