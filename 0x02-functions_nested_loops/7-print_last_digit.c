i#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *@n: Argument to function
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		return (-i);
	}
	return (i);
}
