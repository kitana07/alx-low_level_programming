#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates 2 strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int k = 0, l = 0, m = 0, q = 0;

	while (s1 && s1[m])
	m++;

	while (s2 && s2[q])
	q++;

	if (n < q)
		c = malloc(sizeof(char) * (m + n + 1));
	else
		c = malloc(sizeof(char) * (m + q + 1));

	if (!c)

		return (NULL);

	while (k < m)
	{
		c[k] = s1[k];
		k++;
	}

	while (n < q && k < (m + n))
		c[k++] = s2[l++];

	while (n >= q && k < (m + q))
		c[k++] = s2[l++];

	c[k] = '\0';

	return (c);
}
