#include "main.h"

/**
 * _islower - Checks for lowercase characters
 * @c: Character to be checked
 * Return: 1 for lowercase characters or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
