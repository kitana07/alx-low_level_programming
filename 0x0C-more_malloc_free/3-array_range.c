#include "main.h"
#include <stdlib.h>

/**
 * *array_range - an array of integers
 * @min: min range
 * @max: max range
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *k;
	int l, q;

	if (min > max)
		return (NULL);

	q = max - min + 1;

	k = malloc(sizeof(int) * q);

	if (k == NULL)
		return (NULL);

	for (l = 0; min <= max; l++)
		k[l] = min++;

	return (k);
}
