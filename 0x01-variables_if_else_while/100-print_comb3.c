#include <stdio.h>

/**
 * main - Print combination of single numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int x, b;

	for (x = 0; x < 9; x++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (!((x == b) || (x > b)))
			{
				putchar(x + '0');
				putchar(b + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
