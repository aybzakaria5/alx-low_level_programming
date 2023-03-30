#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: pointer to the converted string
*/
char *cap_string(char *str)
{
	int i, j;
	char Separator[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				*(str + i) -= 32;
			else
			{
				for (j = 0; j < 19; j++)
				{
					if (str[i - 1] == Separator[j])
						*(str + i) -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
