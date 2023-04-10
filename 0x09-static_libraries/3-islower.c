#include "main.h"
/**
 * _islower - checks if character is lowcase
 *@c: the character to check
 *
 * Return: returns  if c is lowcase if not return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}

