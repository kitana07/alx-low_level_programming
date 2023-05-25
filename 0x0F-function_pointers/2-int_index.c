#include "function_pointers.h"

/**
 * int_index - return index place
 * @array: the array
 * @size: size
 * @cmp: pointer
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int l;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (l = 0; l < size; l++)
	{
		if (cmp(array[l]))
		return (l);
	}
	return (-1);
}
