#include "holberton.h"
/**
* cap_string - a function that capitalizes all words of a string
* @s: string
* Return: s
*/
char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	while (s[i] != '\0')
	{
		if ((s[i - 1] == ' ' || s[i - 1] == '\n'
		|| s[i - 1] == '\t' || s[i - 1] == ','
		|| s[i - 1] == '?' || s[i - 1] == '"'
		|| s[i - 1] == ';' || s[i - 1] == '!'
		|| s[i - 1] == '(' || s[i - 1] == ')'
		|| s[i - 1] == '{' || s[i - 1] == '}'
		|| s[i - 1] == '.')
		&& (s[i] > 'a' && s[i] < 'z'))
		{
			s[i] -= 32;
		}
		else
			s[i] = s[i];
		i++;
	}
	return (s);
}
