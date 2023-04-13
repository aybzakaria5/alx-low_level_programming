#include "main.h"
#include<stdlib.h>
/**
 * *malloc_checked - a function that allocates memory usuing malloc 
 *@b: intput
 *Retrun: returns a pointer to the array or null
 */
void *malloc_checked(unsigned int b)
{
	 char *mall;
	 mall = malloc(b);

	if (mall == 0)
	{
		exit(98);
	}
	return(mall);
}
