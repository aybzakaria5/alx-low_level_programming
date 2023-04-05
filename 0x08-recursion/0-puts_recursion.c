#include "main.h"

/**
 *_puts_recursion - a function that prints a string
 *@s: the input
 *Return: returns 0
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\0');
}
