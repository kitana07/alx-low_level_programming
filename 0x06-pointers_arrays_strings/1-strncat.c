#include "main.h"

/**
 *  _strncat - Concatenates two strings using at most n of bytes from src
 *  @dest: input value
 *  @src: input value
 *  @n: input value
 *
 *  Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int m = 0, q = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	while (q < n && src[q] != '\0')
	{
		dest[m] = src[q];
		m++;
		q++;
	}
	dest[m] = '\0';
	return (dest);
}
