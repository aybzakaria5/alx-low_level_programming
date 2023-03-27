#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char to get checked
 *
 * Return: returns 0
 */
void rev_string(char *s)
{
	int a = 0, b, c;
	char rev;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		rev = s[b];
		s[b] = s[c];
		s[c] = rev;
	}
}
