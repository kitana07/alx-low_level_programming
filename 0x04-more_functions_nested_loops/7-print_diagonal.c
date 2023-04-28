#include "main.h"

/**
 * print_diagonal - Draws a diagonal lines
 * @n: The number of times to print diagonal lines
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int m, q;

	for (m = 0; m < n; m++)
	{
	for (q = 0; q < n; q++)
	{
	if (q == m)
	_putchar('\\');
	else if (q < m)
	_putchar(' ');
	}
	_putchar('\n');
	}
	}
}
