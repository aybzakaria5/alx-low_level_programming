/**
 *main- a function that prints the name of a program
 *@argc: the counter
 *@argv: the agrument
 * Return: 0
 */
#include<stdio.h>


int main(int argc, char *argv[])
	
{
	(void) argc;

	printf("%s\n", argv[0]);
	return(0);
}
