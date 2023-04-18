#include "dog.h"
#include<stdlib.h>

/**
 *free_dog - a function that frees your dog
 *@d: dog's information
 *Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
