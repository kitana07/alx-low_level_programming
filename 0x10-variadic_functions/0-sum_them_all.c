#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all
 * @n: amount of params
 * @...: A variable
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list q;
	unsigned int k, l = 0;

	va_start(q, n);

	for (k = 0; k < n; k++)
		l += va_arg(q, int);

		va_end(q);

	return (l);
}
