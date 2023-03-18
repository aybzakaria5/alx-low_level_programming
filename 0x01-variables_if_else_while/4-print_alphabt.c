#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
