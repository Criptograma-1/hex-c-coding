#include "holberton.h"
/**
 * print_alphabet_x10 - a function that prints the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int alp;
	int cont;

	for (cont = 0 ; cont < 10 ; cont++)
	{
		for (alp = 'a' ; alp <= 'z' ; alp++)
		{
			_putchar(alp);
		}
	_putchar('\n');
	}
}
