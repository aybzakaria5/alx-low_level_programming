#include "main.h"

/**
 *print_rev - prints the reverse of a string
 *@s: the string we want to print in reverse
 * Return: returns 0
 */

void print_rev(char *s)
{
	int i;

	int leng = 0;

	for (i = 0 ; s[i] != '\0'; i++)
		leng++;
	for (i = leng - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
