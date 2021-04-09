#include "holberton.h"
/**
* _strncat - a function that concatenates two strings
* @dest: A pointer to the string
* @src: String to be appended
* @n: concatenates caracters
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	
	i = j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	
	while (*(src + j) != '\0' && n > j)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
