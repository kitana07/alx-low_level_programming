#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum
 * @a: sum
 * @size: size of diagonals
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int f1 = 0, f2 = 0, l;

	for (l = 0; l < size; l++)
	{
		f1 = f1 + a[l * size + l];
	}

	for (l = size - 1; l >= 0; l--)
	{
		f2 += a[l * size + (size - l - 1)];
	}
	printf("%d, %d\n", f1, f2);
}
