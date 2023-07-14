#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	int a;

	for (d = 0; d <= 9; d++)
	{
	for (a = 0; a <= 9; a++)
	{
	putchar(d + '0');
	putchar(a + '0');

	if (!(d == 9 && a == 9))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');

	return (0);
}
