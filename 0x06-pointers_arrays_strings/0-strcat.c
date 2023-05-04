#include "main.h"

/**
 *  _strcat - Concatenates two strings
 *  @dest: The destination string
 *  @src: The source string
 *  Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int m, q;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	
	q = 0;
	while (src[q] != '\0')
	{
		dest[m] = src[q];
		m++;
		q++;
	}

	dest[m] = '\0';
	return (dest);
}
