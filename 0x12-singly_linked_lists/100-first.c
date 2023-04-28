#include<litst.h>

void before_main(void) __attribute__((constructor));
/**
 *befor_main - a function that prents a sentence before main
 */
void befor_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
