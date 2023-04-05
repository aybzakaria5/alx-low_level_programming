#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x to the power of y
 *@x: the unput value we want to get the power of
 *@y: the value that sets x to the power of it
 *Return: returns the result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
