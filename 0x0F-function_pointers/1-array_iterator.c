#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints each array
 * @array: the array
 * @size: amount to print
 * @action: pointer to print
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)

		return;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
