#include"variadic_functions.h"

/**
 *print_numbers - a function that prints numbers with separator
 *@separator: to separate the string
 *@...: the intergers to print
 *@n: the numbers of arguments
 *Returun: returns void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			printf("%d%s", va_arg(args, int),
				i ? (separator ? separator : "") : "\n");
		}
		va_end(args);
	}
	return;
}
