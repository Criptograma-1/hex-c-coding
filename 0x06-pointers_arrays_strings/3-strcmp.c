#include "holberton.h"
/**
* _strcmp - a function that compares two strings.
* @s1 - first string
* @s2 - second string
* return: s1-s2
*/
int _strcmp(char *s1, char *s2)
{
	int i, j, aux;

	i = j = 0;
	aux = s1[i]-s2[j];
	return (aux);
}
