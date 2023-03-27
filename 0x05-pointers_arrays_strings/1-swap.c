#include "main.h"

/**
 *swap_int - a function that swaps int a and int b
 *@a: 1st input
 *@b: 2nd input
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
