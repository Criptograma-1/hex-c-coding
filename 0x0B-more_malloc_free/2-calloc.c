#include "holberton.h"
/**
* _calloc - a function that allocates memory for an array
* @nmemb: integer
* @size: integer
* Return: 0 or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(int));

	if (nmemb == 0 || s == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		*(s + i) = nmemb;

	return (s);
}
