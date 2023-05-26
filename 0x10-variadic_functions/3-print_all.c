#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints any input
 * @format: list of different types
 */

void print_all(const char * const format, ...)
{
	int m = 0;
	char *q, *l = "";

	va_list k;

	va_start(k, format);

	if (format)
	{

	while (format[m])
	{
		switch (format[m])
		{
			case 'c':
			printf("%s%c", l, va_arg(k, int));
				break;
			case 'i':
			printf("%s%d", l, va_arg(k, int));
				break;
			case 'f':
			printf("%s%f", l, va_arg(k, double));
				break;
			case 's':
			q = va_arg(k, char *);

				if (!q)
				q = "(nil)";
					printf("%s%s", l, q);
					break;
			default:
				m++;
				continue;
		}
		l = ", ";
		m++;
	}
	}
	printf("\n");
		va_end(k);
}
