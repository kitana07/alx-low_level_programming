#include "main.h"

/**
 * print_number - Prints integers
 * @n: The integer
 * Return: 0
 */

void print_number(int n)
{
	unsigned int f = n;

	if (n < 0)
	{
	_putchar('-');
	f = -n;
	}

	if (f / 10 != 0)
	{
		print_number(f / 10);
	}
	_putchar((f % 10) + '0');

}
