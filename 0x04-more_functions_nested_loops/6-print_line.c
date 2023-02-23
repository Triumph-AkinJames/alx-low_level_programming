#include "main.h"

/**
 * print_line - Prints the line '_' in the terminal
 * @n: The number of times the line should be printed
 * Return: Always 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
			_putchar('\n');
	}
}
