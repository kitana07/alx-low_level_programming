#include "main.h"

/**
 * _isupper - Check for uppercase letters
 * @c: check char
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
