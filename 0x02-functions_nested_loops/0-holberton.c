#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "Holberton";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar ('\n');

	return (0);
}
