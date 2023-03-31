#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: string input
 * Return: pointer to the string
 */

char *leet(char *str)
{
	int i, j;
	int alp[] = {'a', 'e', 'o', 't', 'l'};
	int nm[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == alp[j] || str[i] == alp[j] - 32)
			{
				str[i] = nm[j];
			}
		}
	}
	return (str);
}
