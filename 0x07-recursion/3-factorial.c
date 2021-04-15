#include "holberton.h"
/**
* factorial - a function that returns the factorial of a given number
* @n: integer
* Return: the factorial of n or -1 in case of error
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
