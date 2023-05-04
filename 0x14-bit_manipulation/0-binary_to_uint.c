#include "main.h"

/**
 *binary_to_uint - a function that converts a binary num to ui
 *@b: a pointer to a string
 *Return: the converted num if success or 0 if not
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0,  val = 0;
	if (!b)
		return (0);

	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] !=  '1')
		{
			return (0);
		}
		val = val * 2 + (b[i] - '0');
	}
	return (val);
}
