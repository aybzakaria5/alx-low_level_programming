#include "main.h"

/**
 *_abs - somputing the abs value of an intreger
 *@n : takes in intrger type input for function
 *Return:  always 0
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
