#include "main.h"
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int sum, nmbr;

	for (nmbr = 0; nmbr 1024; nmbr++)
	{
		if ((nmbr % 3 == 0) || (nmbr % 5 == 0))
			sum = sum + nmbr;
	}
	printf("%d\n", sum);

	return (0);
}
