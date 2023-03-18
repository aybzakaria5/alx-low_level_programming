#include<stdio.h>
#include<stdlib.h>
/**
* main -printing the alphabet in lowcase
* except for e and q
*
* Return: Aalways 0 (Success)
*/
int main(void)
{
char alph = 'a';
while
(alph <= 'z');
{
if
(alph != 'q' && alph != 'e')
{
putchar(alph);
}
alph++;
}
putchar('\n');
return (0);
}
