#include"main.h"
#include<stdlib.h>

/**
 *_strlen  - a function that returns the length of agiven string
 *@s: the string
 *Return: retruns the length
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++);
	return (length);
}

/**
 *str_concat - a functoin that coactenates two strings
 *@s1: the first string
 *@s2: second string
 *Return: returns pointer to the new string if success Null if not
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int size_s1, size_s2, i;

		size_s1 = _strlen(s1);
		size_s2 = _strlen(s2);
	concat = malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (concat == 0)
	return (NULL);

	for (i = 0; i <= size_s1 + size_s2; i++)
	{
		if (i < size_s1)
			*(concat + i) = *(s1 + i);
		else
			*(concat + i) = *(s2+(i - size_s1));
	}
	concat[i] = '\0';
	return (concat);
}
