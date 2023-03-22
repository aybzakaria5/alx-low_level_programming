#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long fb1 = 0, fb2 = 1, sum;
	float finale_sum;

	while (1)
	{
		sum = fb1 + fb2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			finale_sum = finale_sum + sum;

		fb1 = fb2;
		fb2 = sum;
	}
	printf("%.0f\n", finale_sum);
	return (0);
}

