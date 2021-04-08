#include "holberton.h"

/**
* _isdigit - a function that checks for 0 through 9 digit
* @c: type int
* Return: 1 if int c is 0 through 9, 0 in otherwise
*/
int _isdigit(int c)
{
        if (c >= '0' && c <= '9')
                return (1);
        else
                return (0);
}
