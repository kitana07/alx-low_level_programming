#include "main.h"
#include <stdlib.h>

/**
 * str_concat - add together
 * @s1: value one
 * @s2: value two
 * Return: result of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *q;
	int m, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	m = l = 0;

	while (s1[m] != '\0')
		m++;

	while (s2[l] != '\0')
		l++;

	q = malloc(sizeof(char) * (m + l + 1));

	if (q == NULL)
		return (NULL);

	m = l = 0;

	while (s1[m] != '\0')
	{
		q[m] = s1[m];
		m++;
	}

	while (s2[l] != '\0')
	{
		q[m] = s2[l];
		m++, l++;
	}
	q[m] = '\0';
	return (q);
}
