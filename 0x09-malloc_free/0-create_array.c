#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *create_array -create an array of chars
* @size: size of array
* @c: element
* Return: NULL if size=0 pointer to array otherwise
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *chararray;

	if (size == 0)
		return (NULL);

	chararray = malloc(sizeof(char) * size);

	if (chararray == NULL)
		return (NULL);
	while (i < size)
	{
		*(chararray + i) = c;
		i++;
	}
	return (chararray);
}
