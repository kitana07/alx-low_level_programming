#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int m, q;

	for (m = 1; m <= size; m++)
	{
	for (q = m; q < size; q++)
	{
	_putchar(' ');
	}
	for (q = 1; q <= m; q++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
