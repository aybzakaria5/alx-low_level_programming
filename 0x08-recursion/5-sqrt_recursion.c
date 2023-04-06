#include "main.h"

/**
 *_get_sqrt - a function that gets the natural square root of an inpur
 *@n0: the input
 *@rt: the root we are starting with
 *Return: returns the square root and if not found it returns 0
 */
int _get_sqrt(int n0, int rt)
{
	if ((rt * rt) == n0)
		return (rt);
	else if (n0 < 2 * rt)
		return (-1);
	else
		return (_get_sqrt(n0, rt + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural square toot recusively
 *@n: the input
 *Return: returns the natural square root if found or -1 if not found
 */

int _sqrt_recursion(int n)
{
	int rt = 1;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (_get_sqrt(n, rt));
}
