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
	if (s1 == NULL)
		a = 0;
	else
		for (a = 0; s1[a]; a++);
	if (s2 == NULL)
		b = 0;
	else
		for (b = 0; s2[b]; b++);
	if (b > n)
		b = n;

	str = malloc(sizeof(char) * (a + b + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		str[i] = s1[i];
	for (i = 0; i < b; i++)
		str[i + a] = s2[i];
	str[a + b] = '\0';

	return (str);
}

