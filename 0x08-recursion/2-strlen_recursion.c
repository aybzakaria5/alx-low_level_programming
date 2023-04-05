#include "main.h"
/**
 *_strlen_recursion - a function that returns the length of a string
 *@s: the input
 *Return:  returns the length of a string
 */

int _strlen_recursion(char *s)

{
	int kimba = (*s != '\0') ? _strlen_recursion(s + 1) + 1 : 0;
		return (kimba);
}
