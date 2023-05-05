#include "main.h"

/**
 *get_endianness - checks the endianness
 *
 *Return: 0 if big endian 1 if little
  */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *) &i;
	return ((*c == 1) ? 1 : 0);
}
