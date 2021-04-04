#include "holberton.h"
/**
 * print_alphabet - a function tjat prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int alp;

	for (alp = 'a' ; alp <= 'z' ; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
