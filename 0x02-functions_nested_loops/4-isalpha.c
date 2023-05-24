#include "main.h"

/**
 * _isalpha - Checks if a character is uppercase or lowercase
 * @c: Character to be checked
 * Return: 1 for uppercase and lowercase characters, 0 for otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
