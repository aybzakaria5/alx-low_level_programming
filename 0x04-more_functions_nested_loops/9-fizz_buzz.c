#include <stdio.h>
/**
 * main - Program that print numbers 1-100
 * Fizz for multiples of 3
 * Buzz for multiples of 5
 * FizzBuzz for multiples of 3 & 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int nmbr;

	for (nmbr = 1; nmbr <= 100; nmbr++)
	{
		if (nmbr % 3 == 0 && !(nmbr % 5 == 0))
			printf("Fizz");
		else if (nmbr % 5 == 0 && !(nmbr % 3 == 0))
			printf("Buzz");
		else if (nmbr % 3 == 0 && nmbr % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", nmbr);
		if (nmbr != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
