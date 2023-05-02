#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)
{
	int m = 0;
	int q;

	while (str[m] != '\0')
	{
	m++;
	}
	if (m % 2 == 1)
	{
	q = (m - 1) / 2;
	q += 1;
	}
	else
	{
	q = m / 2;
	}

	for (; q < m; q++)
	{
	_putchar(str[q]);
	}
	_putchar('\n');
}
