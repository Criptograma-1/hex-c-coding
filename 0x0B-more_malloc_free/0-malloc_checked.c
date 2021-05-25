#include "holberton.h"

/**
* malloc_checked - Checks if the memory are allocated.
* @b: size of memory
* Return: A pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
