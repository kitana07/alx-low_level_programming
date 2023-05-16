#include "main.h"
#include <stdlib.h>

/**
 * argstostr - con all arguments
 * @ac: int value
 * @av: double pointer
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int k, l, m = 0, q = 0;
	char *c;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l]; l++)
		q++;
	}
	q += ac;

	c = malloc(sizeof(char) * q + 1);
	if (c == NULL)
	return (NULL);
	
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l]; l++)
	{
		c[m] = av[k][l];
		m++;
	}
	if (c[m] == '\0')
	{
		c[m++] = '\n';
	}
	}
	return (c);
}
