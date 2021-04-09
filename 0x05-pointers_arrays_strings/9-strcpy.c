#include "holberton.h"

/**
 * _strcpy - Copies string pointed to by src
 * @dest: Array being copied to
 * @src: String to be copied
 *
 * Return: The value of pointer to temp
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while ((*dest++ = *src++))
		;
	return (temp);
}
