#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - duplicate to new memory
 * @str: char duplicate
 * Return: 0
 */

char *_strdup(char *str)
{
	char *k;
	int f, l = 0;

	if (str == NULL)
		return (NULL);

	f = 0;
	while (str[f] != '\0')
	f++;

	k = malloc(sizeof(char) * (f + 1));

	if (k == NULL)
	return (NULL);

	for (l = 0; str[l]; l++)
		k[l] = str[l];
	return (k);
}
