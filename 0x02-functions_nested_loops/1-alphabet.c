#include "main.h"

/**
 * main - Print alphabet
 *Return: 0 (success)
 */

void print_alphabet(void) /** a function to print alphabet*/
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
