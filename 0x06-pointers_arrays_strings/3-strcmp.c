#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string
 *Return: returns the diference betwween *s1 and *s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	if (s1[i] != s2[j])
		return (s1[i] - s2[j]);

	else
		return (0);
	
}
