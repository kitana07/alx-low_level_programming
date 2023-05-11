#include "main.h"

/**
  * is_prime_number - Return a number if it is a prime
  * @n: the number
  * Return: 1 if n prime , 0 if not
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
  * actual_prime - checks if a number is a recursive prime
  * @n: the number
  * @k: the iteration
  * Return: 1 if prime or 0 if not
  */

int actual_prime(int n, int k)
{
	if (k == 1)
		return (1);
	if (n % k == 0 && k > 0)
		return (0);
	return (actual_prime(n, k - 1));
}
