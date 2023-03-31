#include "main.h"

/**
 * cap_string - compares two strings.
 * @str: source string
 * Return: pointer to the resulting string dest
 */
char *cap_string(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		if (k == 0)
		{
			if (str[k] <= 'z' && str[k] >= 'a')
			{
				str[k] = (str[k] - 'a') + 'A';
			}
		}
		if (str[k] == ' ' || str[k] == '\t' || str[k] == ',' ||
			str[k] == ';' || str[k] == '!' || str[k] == '?' ||
			str[k] == '"' || str[k] == '(' || str[k] == ')' ||
			str[k] == '{' || str[k] == '}' || str[k] == '\n' ||
			str[k] == '.')
		{
			if (str[k + 1] <= 'z' && str[k + 1] >= 'a')
			{
				str[k + 1] = (str[k + 1] - 'a') + 'A';
			}
		}
	}
	return (str);
}
