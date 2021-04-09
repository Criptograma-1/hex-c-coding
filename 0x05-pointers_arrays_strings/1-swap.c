#include "holberton.h"
/**
* swap_int - a function that swaps the values of two integers
* @a: type int
* @b: type int
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
