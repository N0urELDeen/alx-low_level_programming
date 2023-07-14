#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int d, a;

        for (d = 0; d <= 8; d++)
        {
                for (a = d + 1; a <= 9; a++)
                {
                        putchar(d + '0');
                        putchar(a + '0');

                        if (d != 8 || a != 9)
                        {
                                putchar(',');
                                putchar(' ');
                        }
                }
        }
        putchar('\n');

        return (0);
}

