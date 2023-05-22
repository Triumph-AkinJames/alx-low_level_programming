#include <stdio.h>

/**
 * main - starting (entry) point of the program
 * printf - write the string to standard output
 * Description: Prints all possible different combinations
 * -  of two digits followed by a new line
 * Return: returns (0) for success
 */

int main(void)
{
		int x;
		int b;

		for (x = 0; x <= 8; x++)
		{
			for (b = x + 1; b <= 9; b++)
			{
				putchar(x + '0');
				putchar(b + '0');
			if (x != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
		putchar('\n');
		return (0);

}

