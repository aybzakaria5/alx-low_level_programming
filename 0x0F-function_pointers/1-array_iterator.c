#include"function_pointers.h"

/**
 *array_iterator - a function that excutes the function action as an argument
 *@array : the array given
 *@size: the size of array
 *@action:pointer function we want to excute
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action) (int))
{
	if (array && size > 0 && action)
	{
		unsigned int i;
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
