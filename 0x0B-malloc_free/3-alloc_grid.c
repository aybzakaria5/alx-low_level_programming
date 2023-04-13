#include "main.h"
#include<stdlib.h>
/**
 *alloc_grid -  a function that returns a pointer to 2 dimensional array
 *@width: input
 *@height: input
 *Return: returns the pointer if true NULL if not
 */
int **alloc_grid(int width, int height)
{
	int **finale;
	int i = 0, j = 0;

	finale = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || finale == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < height; i++)
		{
			finale[i] = malloc(sizeof(**finale) * width);
			if (finale[i] == 0)
			{
				while (i--)
				free(finale[i]);
				free(finale);
				return (NULL);
			}

			for (; j < width; j++)
				finale[i][j] = 0;
		}
	}
	return (finale);
}
