#include"main.h"
#include<stdlib.h>
/**
 *array_range - a fucntion that creates an array of integers
 *@min: fist value
 *@max: last value
 *Return: returns a pointer to the allocated memor if success NULL if fail
 */
int *array_range(int min, int max)
{
	int i;
	int *m;

	if (min > max)
		return (NULL);
	m = malloc((max - min + 1) * sizeof(int));

	if (m != 0)
	{
		for (i = 0; i <= max - min; i++)
		{
			m[i] = min + i;
		}
	return (m);
	}
	return (NULL);
}
