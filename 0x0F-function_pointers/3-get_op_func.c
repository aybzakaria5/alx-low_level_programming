#include"3-calc.h"
/**
 *get_op_func - pointer to the right op finction
 *@s: hte opperator passed as an argument to the prgrm
 *
 *Return: the right function pointer or NULL if not matching the 5 ops
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s != '\0' && s[0] == ops[i].op[0] && !s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
