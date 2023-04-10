#include<stdio.h>

/**
 *main - a function that prints the number of arguments
 *@argc: the number of arguments
 *@argv: the arguments
 *Return: return 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1); /*(argc - 1)  beacuse we start from 0*/
	return (0);
}
