#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory
 * @s: memory area
 * @b: char to be copied
 * @n: amount of times to copy
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}

/**
 * *_calloc - allocate memory
 * @nmemb: amount of elements
 * @size: size
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *l;

	if (nmemb == 0 || size == 0)

		return (NULL);

	l = malloc(size * nmemb);

	if (l == NULL)

		return (NULL);

	_memset(l, 0, nmemb * size);

	return (l);
}
