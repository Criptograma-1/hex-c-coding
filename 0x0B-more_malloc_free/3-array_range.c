#include "holberton.h"

/**
* *array_range - a function that creates an array of integers
* @min: minimum value
* @max: maximum value
* Return: pointer to array or NULL
*/
int *array_range(int min, int max)
{
	int *ar, i, size;

	size = max - min;

	if (min > max)
		return (NULL);

	ar = malloc((size + 1) * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		ar[i] = min;
		min++;
	}
	return (ar);
}
