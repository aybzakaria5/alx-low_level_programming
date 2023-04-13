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
	char *S;
	unsigned int i, j, lengs1, lengs2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[lengs1] != '\0')
	{
		lengs1++;
	}
	while (s2[lengs2] != '\0')
	{
		lengs2++;
	}

	S = malloc(lengs1 + n + 1);
	if (S == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		S[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		S[i + j] = s2[j];
		
	}
	S[i + j] = '\0';
	return (S);
}
