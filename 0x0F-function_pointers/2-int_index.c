#include"function_pointers.h"

/**
 *int_index - a function that takes a function pointer as an argumment
 *@array: the array
 *@size: the size of array
 *@cmp: a function pointer
 *Return: if true it returns the index, if not 0
 */

int int_index(int *array, int size, int (*cmp) (int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
