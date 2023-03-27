#include "main.h"

/**
 * puts_half - a function that prints half of a string
 *@str: char input
 *Return: returns 0
 */

void puts_half(char *str)
{
	int a = 0;
	int n;

	while (str[a] != '\0')
		a++;
	if (a + 1 % 2 != 0)
		n = (a - 1) / 2;
	else
		n = (a / 2);
	n++;

	for (a = n; str[a] != '\0'; a++)
	_putchar(str[a]);
	_putchar('\n');
}
