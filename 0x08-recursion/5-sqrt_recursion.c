#include "main.h"

/**
  * _sqrt_recursion - Return square root
  * @n: the number
  * Return: the square root
  */

int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
		return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - finds the number
 * @n: number
 * @q: iterator
 * Return: the result
 */

int actual_sqrt_recursion(int n, int q)
{
	if (q * q > n)
		return (-1);
	if (q * q == n)
		return (q);
	return (actual_sqrt_recursion(n, q + 1));
}
