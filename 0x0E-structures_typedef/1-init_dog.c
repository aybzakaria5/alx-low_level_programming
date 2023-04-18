#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 *@d : the dog to initialize with
 *@name: the dog's name
 *@age: the dog's age
 *@owner: owner's naem
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

