#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 * Return: 1 for positive numbers, -1 for negative
 * numbers and 0 for zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(',');
		_putchar(' ');
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar(',');
		_putchar(' ');
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar(',');
		_putchar(' ');
		_putchar('-');
	}
}
