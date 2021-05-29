#include "holberton.h"
/**
* _calloc - a function that allocates memory for an array
* @nmemb: integer
* @size: integer
* Return: 0 or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (nmemb == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = '\0';

	return (ptr);
}
