#include "main.h"

/**
 * _memset - Entry point
 * @s: return pointer
 * @b: constant value
 * @n: bytes to be changed
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
