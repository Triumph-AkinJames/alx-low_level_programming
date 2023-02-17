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
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar("%c\n", ch);
	return (0);
}
