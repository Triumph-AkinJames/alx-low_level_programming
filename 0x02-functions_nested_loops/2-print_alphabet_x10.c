#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase
 * ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int c, b;

	for (b = 0; b < 10; b++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
