#include<stdio.h>
/**
 * main -Entry point
 *
 * Return always 0
 */
int main(void)
{
	int x;

	x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
