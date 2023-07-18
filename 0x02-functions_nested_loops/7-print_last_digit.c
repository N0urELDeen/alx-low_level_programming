#include "main.h"
/**
 * print_last_digit - return last digit
 * @i: num to cheak
 * Return: 0 or 1
 */

int print_last_digit(int i)
{
	i %= 10;
	if (i < 0)
	{
		i *= -1;
	}
	_putchar('0' + i);
	return (i);
}
