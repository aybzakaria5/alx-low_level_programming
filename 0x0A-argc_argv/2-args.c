#include<stdio.h>
/**
 * main - a function that prints each argument line per line
 *@argc: the number of arguments
 *@argv: the arguments
 *Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for ( ; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

