#include "holberton.h"
/**
* strlen_1 - gives the length of the string.
* @s: sting.
* Return: returns length of the string
*/
int strlen_1(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + strlen_1(s + 1));
}
/**
* check_palindrome - check if a string is a palindrome
* @b: begining
* @e: end
* @s: string
* Return: 1 if is palindrome and 0 if not
*/
int check_palindrome(char *s, int b, int e)
{
	if (s[b] != s[e])
	{
		return (0);
	}
	else if (b >= e)
	{
		return (1);
	}
	else
	{
		return (check_palindrome(s, ++b, --e));
	}
}

/**
* is_palindrome - check if a string is a palindrome
* @s: string
* Return: 1 if is palindrome and 0 if not
*/
int is_palindrome(char *s)
{
	int len = strlen_1(s);

	return (check_palindrome(s, 0, len - 1));
}
