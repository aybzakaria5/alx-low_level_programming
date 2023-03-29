#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The pointer to convert
 *
 * Return: returns an int
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[a])
	{
		if (s[a] == '-')
		{
			min *= -1;
		}

		while (s[a] >= '0' && s[a] <='9')
		{
			isi = 1;
			ni = (ni * 10) + (s[a] - '0');
			a++;
		}

		if (isi == 1)
		{
			break;
		}

		a++;
	}

	ni *= min;
	return (ni);
}
