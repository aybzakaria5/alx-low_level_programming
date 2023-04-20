#include"3-calc.h"

/**
 *main - check code
 *@argc: number of arguments
 *@argv: arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int (*oper_func)(int, int);
	int i, j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	oper_func = get_op_func(argv[2]);
	if (oper_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (j == 0 && (argv[2][0] == '%' || argv[2][0] == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", oper_func(i, j));
	return (0);
}
