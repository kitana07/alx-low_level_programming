#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: printed between strings
 * @n: number of int
 * @...: number variable
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list m;
	unsigned int f;

	va_start(m, n);

	for (f = 0; f < n; f++)
	{
		printf("%d", va_arg(m, int));

		if (f != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(m);
}
