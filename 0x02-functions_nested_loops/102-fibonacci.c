#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int start;
	unsigned long fb1 = 0, fb2 = 1, sum;

	for (start = 0; start < 50; start++)
	{
		sum = fb1 + fb2;
		printf("%lu", sum);

		fb1 = fb2;
		fb2 = sum;

		if (start == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
