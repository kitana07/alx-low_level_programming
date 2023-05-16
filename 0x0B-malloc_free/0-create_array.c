#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array and assign char
 * @size: size
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *q;
	unsigned int m;

	q = malloc(sizeof(char) * size);
	if (size == 0 || q == NULL)
	return (NULL);

	for (m = 0; m < size; m++)
	q[m] = c;
	return (q);
}
