#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Succuss)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
