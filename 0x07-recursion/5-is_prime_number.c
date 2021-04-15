#include "holberton.h"
/**
* is_prime_number - check if n is prime number
* @n: a integer
* Return: 1 if is prime and o otherwise
*/
int is_prime_number(int n)
{
	if (n == 2 || n == 3 || n == 5 || n == 7)
	{
		return (1);
	}
	else if (n == -1 || n == 1)
	{
		return (0);
	}
	else if ((n % 2 == 0) || (n % 3 == 0) || (n % 4 == 0)
|| (n % 5 == 0) || (n % 6 == 0) || (n % 7 == 0))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
