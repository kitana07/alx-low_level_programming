#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints the strings
 * @separator: printed between strings
 * @n: number
 * @...: variable numbers
 * Result: If separator is NULL - ignore, if a string is NULL, (nil)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list k;
	char *l;
	unsigned int f;

	va_start(k, n);

	for (f = 0; f < n; f++)
	{
		l = va_arg(k, char *);

		if (l == NULL)
		printf("(nil)");

		else
		printf("%s", l);

		if (f != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(k);
}
