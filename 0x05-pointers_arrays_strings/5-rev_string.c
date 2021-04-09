#include "holberton.h"

/**
 * _strlen - Returns the length of a string
 * @s: Variable being evaluated
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
/**
 * rev_string - Reverses a string
 * @s: Array being reversed
 */
void rev_string(char *s)
{
	if (*s)
	{
		unsigned char s0, s1;
		char *p;
		unsigned int i = 0;

		p = s;
		s0 = s1 = 1;

		while (s0)
		{
			if (s1 == 1)
			{
				i = _strlen(s);
				s1 += 1;
			}
			else if (s1 == 2)
			{
				p += (i - 1);
				s1 = 0;
			}
			else if (s < p)
			{
				int temp = *s;
				*s = *p;
				*p = temp;
				p--;
				s++;
			}
			else
				s0 = 0;
		}
	}
	else
		return;
}
