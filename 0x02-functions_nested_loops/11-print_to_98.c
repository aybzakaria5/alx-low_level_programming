#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints by starting by n to 98 in both sense
 *@n: input
 */

void print_to_98(int n)
{
	int start;

	if (n < 98)
		for (start = n; start < 98; start++)
			printf("%d, ", start);
	else
		for (start = n; start > 98; start--)
			printf("%d, ", start);
	printf("98\n");
}
