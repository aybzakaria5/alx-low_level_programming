#include "main.h"
#include <unistd.h>

/**
 *_outchar - writes the character c to to stdout
 *@c: the input character
 *Return: returns 1 if success, on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
