#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
