#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, a;

	for (d = 0; d <= 98; d++)
	{
		for (a = d ; a <= 99; a++)
		{
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');
			putchar(' ');
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');

			if (d != 98 || a != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
