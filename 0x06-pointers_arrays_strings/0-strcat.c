#include "holberton.h"
/**
* _strcat - a function that concatenates two strings
* @dest: A pointer to the string
* @src: String to be appended
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i++])
		j++;

	for (i = 0; src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}
