#include "main.h"

/**
 * add_strings - Adds numbers
 * @n1: The first number to be added
 * @n2: The second number to be added
 * @r: The buffer
 * @r_index: The current index
 * Return: a pointer to the result, if r cannot store the sum - 0.
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int m, q = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
	
		m = (*n1 - '0') + (*n2 - '0');
		m += q;

	*(r + r_index) = (m % 10) + '0';
	q = m / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		m = (*n1 - '0') + q;
		*(r + r_index) = (m % 10) + '0';
		q = m / 10;
	}

	for (; *n2; n2--, r_index--)
	{

	m = (*n2 - '0') + q;
	*(r + r_index) = (m % 10) + '0';
	q = m / 10;
	}

	if (q && r_index >= 0)
	{

	*(r + r_index) = (q % 10) + '0';
	return (r + r_index);
	}

	else if (q && r_index < 0)
	return (0);

	return (r + r_index + 1);
}

/**
 * infinite_add - Adds numbers.
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer
 * @size_r: The buffer size
 * Return: If can store the sum, If r cannot store the sum - 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int f, k = 0, l = 0;

	for (f = 0; *(n1 + f); f++)
	k++;

	for (f = 0; *(n2 + f); f++)
	l++;

	if (size_r <= k + 1 || size_r <= l + 1)
	return (0);

	n1 += k - 1;
	n2 += l - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
