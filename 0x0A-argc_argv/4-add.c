#include "main.h"
#include<stdio.h>
#include<ctype.h>
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
 * main - a function that prints the sum of tow arguments
 *@argc: the number of arguments
 *@argv: the arguments
 *Return: return 0 if success  if not
 */
int main(int argc, char *argv[])
{
    int i;
    int j;
    int sum = 0;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return (1);
            }
        }
        sum += _atoi(argv[i]);
    }

    printf("%d\n", sum);
    return (0);
}
