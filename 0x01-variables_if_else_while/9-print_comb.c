#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Alwayes 0 (Success)
 */

int main(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
	putchar(d + '0');
	if (d < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
