#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: The buffer
 * @size: The size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int k = 0, l, f;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (k < size)
	{
		l = size - k < 10 ? size - 0 : 10;
		printf("%08x: ", k);
		for (f = 0; f < 10; f++)
		{
			if (f < l)
			printf("%02x", *(b + k + f));

			else
				printf("  ");

			if (f % 2)
			{
				printf(" ");
			}
		}
		for (f = 0; f < l; f++)
		{
			int c = *(b + k + f);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		k += 10;
	}
}
