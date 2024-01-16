#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search - a function that searches linearly
* @array: the array
* @size: the size
* @value: the value
* Return: returns either the index of the value or -1 if failed
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
