#include "main.h"
#include<stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: converted
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

		while (s[a] >= '0' && s[a] <= '9')
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
/**
 * main - a function that that multiplies two numbers
 *@argc: the number of arguments
 *@argv: the agruments
 *Return: return 0 if sucess 1 if error
 */
int main(int argc, char *argv[])
{
	int prod, x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = _atoi(argv[1]);
		y = _atoi(argv[2]);
		prod = x * y;
		printf("%d\n", prod);
		return (0);
	}
}
