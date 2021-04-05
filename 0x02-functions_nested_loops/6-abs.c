#include "holberton.h"
/**
 * _abs - computes the values of an integer
 * @n: integer input
 * Return: absolute value of n.
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
