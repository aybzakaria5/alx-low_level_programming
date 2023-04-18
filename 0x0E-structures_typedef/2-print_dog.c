#include "dog.h"
#include<stdio.h>

/**
 *print_dog - a function that prints a dog's information
 *@d : the dog
 *Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name : %s\n", d->name != 0 ? d->name : "(nil)");
		printf("Age : %f\n", d->age);
		printf("Owner : %s\n", d->owner != 0 ? d->owner : "(nil)");
	}
}
