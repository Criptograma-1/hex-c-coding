#include "holberton.h"
/**
* _pow_recursion - function that returns the value of x raised to the power of y
* @x: a number
* @y: a number
* Return: x raised to y, if x<0 return -1
*/
int _pow_recursion(int x, int y)
{
	int r;

	r = 1;
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	while (y > 0)
	{
		r *= x;
		y--;
	}
	return (r);
}
