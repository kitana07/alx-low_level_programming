#include "main.h"

/**
 * more_numbers - Print more numbers
 * Return: void
 */

void more_numbers(void)
{
	int m, q;

	for (m = 1; m <= 10; m++)
	{
	for (q = 0; q <= 14; q++)
	{
	if (q >= 10)
	{
	_putchar('1');
	}
	_putchar(q % 10 + '0');
	}
	_putchar('\n');
	}
}
