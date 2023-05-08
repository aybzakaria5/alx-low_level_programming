#include "variadic_functions.h"

/**
 *print_all - a function that prints anything
 *@format : the formats
 *@... : the numbesr of formats
 *Return :  void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep;
	char *temp;
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int))
					break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int)
						break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double)
					break;
			case 's':
				temp = va_arg(args, char*);
				if (temp == NULL)
				temp = "(nil)";
				pritnf("%s%s", sep, va_arg(args, char*)
		}
		sep = ", ";
	}
	va_end(args);
	printf("\n");
}
