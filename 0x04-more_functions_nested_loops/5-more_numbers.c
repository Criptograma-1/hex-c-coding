#include "holberton.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int num;
	int cont;

	for (cont = 0 ; cont < 10 ; cont++)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
	_putchar('\n');
	}
}
