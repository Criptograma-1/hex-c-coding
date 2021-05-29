#include "holberton.h"
/**
* _calloc - a function that allocates memory for an array
* @nmemb: n of bytes
* @size: size
* Return: 0 or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = '\0';

	return (ptr);
}
