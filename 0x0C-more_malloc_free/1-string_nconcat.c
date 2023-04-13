#include"main.h"
#include<stdlib.h>
/**
 * *string_nconcat - a function that conactenates two strings
 *@s1 : the frist string
 *@s2 : the second string
 *@n :  the frist byets that will be coppied from s2
 *Return: returns the pointer to the new array if 1 , NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int i;
	char *S;
	unsigned int lengs1 = 0;
	unsigned int lengs2 = 0;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (s1[lengs1])
	{
		lengs1++;
	}
	while (s2[lengs2])
	{
		lengs2++;
	}
	if (lengs2 > n)
		lengs2 = n;
	S = malloc(lengs1 + lengs2 + 1);
	if (S == 0)
	{
		return (NULL);
	}
	for (i = 0; i < lengs1 + lengs2; i++)
	{
		if (i < lengs1)
		{
			S[i] = s1[i];
		}
		else
		{
			S[i] = s2[i - lengs1];
		}
	}
	S[i] = '\0';
	return (S);
}
