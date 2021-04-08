#include "holberton.h"
/**
*print_diagonal - Draws a diagonal line on the terminal
*@n: number of times the character \ should be printed
*Return: Nothing
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
