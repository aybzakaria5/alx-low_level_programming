#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long  div = 2;
	long largfact = 0;

	while (n != 1)
	{
		if (n % div == 0)
	{
		n = n / div;
		largfact = div;
	}
		div = div + 1;
	}
	printf("%ld\n", largfact);
	return (0);
}
