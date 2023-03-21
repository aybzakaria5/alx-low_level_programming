#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet ten times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int line;
	int ch;

	for (line = 1; line <= 10; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
