#include "function_pointers.h"

/**
 *pirnt_name - a function that prints a name
 *@name: the string name
 *@f: the function pointer we will use to print name
 *Return;  void
 */
 void print_name(char *name, void(*f)(char *))
{
	if (f)
	f(name);
}
