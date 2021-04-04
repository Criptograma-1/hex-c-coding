#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a' ; low <= 'z' ; low++)
	{
		if (low == 'q' || low == 'e')
			low++;
		putchar(low);
	}
	putchar('\n');
	return (0);
}
