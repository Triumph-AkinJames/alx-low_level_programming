#include <stdio.h>

/**
 * main - prints alphabets except e and q
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e')
		{
			continue;
		}

		if (c == 'q')
		{
			continue;
		}
		putchar(c);
	}

	putchar('\n');

	return (0);
}
