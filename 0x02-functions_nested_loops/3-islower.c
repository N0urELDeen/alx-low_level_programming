#include "main.h"

/**
 * _islower - cheak if the letter is lower case
 *@c: caracter to cheak
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
