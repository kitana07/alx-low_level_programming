#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	unsigned int q;

	if (n < 0)
	{
	q = -1;
	_putchar('-');
	}
	else
	{
	q = n;
	}

	if (q / 10)
	{
	print_number(q / 10);
	}

	_putchar((q % 10) + '0');
}
