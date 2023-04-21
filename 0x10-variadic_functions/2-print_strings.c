#include"variadic_functions.h"

/**
 *print_strings - a function that prints string with separator
 *@n: number of arguments
 *@separator: separator to be between chars
 *@...: the strings
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s%s", (s = va_arg(args, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
		va_end(args);
	}
}
