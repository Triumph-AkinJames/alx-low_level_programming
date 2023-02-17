#include <stdio.h>

/**
 * main - Entry
 *
 * $ch - prints all letters of the alphabets in lowercase
 *
 * Return: 0
 */

int main(void)
{
	for (x = 'A'; x <= 'Z'; x++)
	{
		int lower_x = tolower(x);

		putchar(lower_x);
	}
	return (0);
}
