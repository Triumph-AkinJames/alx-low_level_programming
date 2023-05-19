#include <stdio.h>

/**
 * main - prints numbers in base 16
 *
 * Return: Always 0
 */

int main(void)
{
	int b;
	char x;

	for (b = 0; b < 10; b++)
	{
		putchar(b + '0');
	}

	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
