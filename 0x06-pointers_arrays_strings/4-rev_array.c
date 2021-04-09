#include "holberton.h"
/**
* reverse_array - a function that reverses the content of an array of integers.
* @a: array
* @n: number of elements of the array
* Return: nothing
*/
void reverse_array(int *a, int n)
{
	int r, i;
	
	i = r = 0;
	n -= 1;
	while (i <= n)
	{
		r = a[i];
		a[i] = a[n];
		a[n] = r;
		i++;
		n--;
	}
}
