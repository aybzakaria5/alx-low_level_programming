#include "main.h"

/**
 * _strlen - a function that counts the length of a string by returning it
 *@s: a char to get checked
 * Return: retuns 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}
