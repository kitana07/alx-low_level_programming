#include "main.h"

/**
 * _strncpy - Copies inputted number
 * @dest: Value
 * @src: Value
 * @n: The maximum number
 * Return: Result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (m < n && src[m] != '\0')
	{
	dest[m] = src[m];
	m++;
	}
	while (m < n)
	{
	dest[m] = '\0';
	m++;
	}
	return (dest);
}
