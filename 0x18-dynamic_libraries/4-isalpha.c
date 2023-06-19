#include "main.h"

/**
 * _isalpha - check if a character is an alphabet
 *@c: the character to check
 *
 *Return: returns 1 if true and  0 if not
 */
int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
