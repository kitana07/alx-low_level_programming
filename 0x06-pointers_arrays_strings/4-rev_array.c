#include "main.h"

/**
 * reverse_array - Reverses the contents
 * @a: The integers
 * @n: The number
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int m, q;

	for (m = 0; m < n--; m++)
	{
		q = a[m];
		a[m] = a[n];
		a[n] = q;
	}
}
