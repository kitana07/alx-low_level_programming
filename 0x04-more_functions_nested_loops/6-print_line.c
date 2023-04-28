#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: The number of lines to draw
 */

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int x;

	for (x = 1; x <= n; x++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
