#include "holberton.h"

/**
* string_nconcat - a function that concatenates two strings
* @s1 - first string
* @s2 - second string
* @n - part of s2
* Return -concatenated string or NULL if fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, a, b;
	if (s1)
		for (a = 0; s1[a]; a++);
	if (s2)
		for (b = 0; s2[b]; b++);
	if (!(n >= b))
		b = n;

	str = malloc(sizeof(char) * (a + b) + 1);
	if (!str)
		return (NULL);
	for (i = 0; i< (a + b); i++)
	{
		if (i < a)
			str[i] = s1[i];
		else
			str[i] = s2[i - a];
	}

	str[i] = '\0';

	return (str);
}

