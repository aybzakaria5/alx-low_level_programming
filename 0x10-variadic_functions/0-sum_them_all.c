#include"variadic_functions.h"

/**
 *sum_them_all - a function that summs var arguments
 *@n: the number of arguments
 *@...: integers to sum
 *Return: returns the sum
 */


int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i = 0;
	va_list arg;
	
	va_start(arg, n);


	if (n)
	{
		for (i = 0; i < (int) n; i++)
		{
			sum += va_arg(arg, int);
		}
		va_end(arg);
		return (sum);
	}

	return (0);
}
