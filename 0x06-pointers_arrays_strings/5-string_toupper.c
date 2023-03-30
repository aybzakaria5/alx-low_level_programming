#include "main.h"

/**
 * string_toupper - changes all the lowaercase letters to uppercase letter
 *@str: the input string
 *Return: returns a pointer to the string we converted
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
