#include<stdio.h>
/**
* main - Entry
*
*/
int main(void)
{
char c;
c = 'a';
	while (c <= 'z')
	{
	putchar(c);
c++;
}
c = 'A';
while (c <= 'Z')
{
	putchar(c);
	c++;
	}
	putchar('\n');
return (0);
}
