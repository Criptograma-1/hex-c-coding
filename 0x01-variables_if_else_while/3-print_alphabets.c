#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;
	char upper;

	for (low = 'a' ; low <= 'z' ; low++)
		putchar(low);
	for (upper = 'A' ; upper <= 'Z' ; upper++)
		putchar(upper);
	putchar('\n');
	return (0);
}

