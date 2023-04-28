#include "main.h"

/**
 * print_square - Prints a squares
 * @size: Size of square
 */

void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int m, q;

	for (m = 0; m < size; m++)
	{
	for (q = 0; q < size; q++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
