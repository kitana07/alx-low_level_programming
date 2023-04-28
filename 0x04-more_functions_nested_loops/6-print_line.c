#include "main.h"

/**
 * print_line - Draws a straight line
 * @l: The number of lines to draw
 */

void print_line(int l)
{
	if (l <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int x;
	
	for (x = 1; x <= l; x++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
