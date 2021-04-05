#include "holberton.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: number's lst digit result
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int p;

	p = (n % 10);

	if (p < 0)
	{
		p = (-1 * p);
	}

	_putchar(p + '0');
	return (p);
}
