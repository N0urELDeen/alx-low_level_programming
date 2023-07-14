#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Alwys 0 (Success)
 */

int main(void)
{
	int d, a, c;

	for (d = 0; d <= 7; d++)
	{
		for (a = d + 1; a <= 8; a++)
		{
			for (c = a + 1; c <= 9; c++)
			{
				putchar(d + '0');
				putchar(a + '0');
				putchar(c + '0');

				if (d != 7 || a != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
