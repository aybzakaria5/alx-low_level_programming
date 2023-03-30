#include "main.h"

/**
 * cap_string - capitalizes all the words of a string
 * @str: the changing pointer to the string
 * Return: a pointer to the changed str
 */

char *cap_string(char *str)
{
	char Separators[] = " \t\n,;.!?\"(){}";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		for (j = 0; Separators[j]; j++)
		{
			if (str[i] == Separators[j])
			{
				i++;
			}
		}
	}
	return (str);
}
