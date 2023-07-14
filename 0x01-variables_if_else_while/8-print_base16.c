#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Alwayes 0 (Success)
 */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);

	for (d = 'a'; d <= 'f'; d++)
	putchar(d);

	putchar('\n');

	return (0);
}
