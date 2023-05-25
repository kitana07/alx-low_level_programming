#include "3-calc.h"

int op_mod(int a, int b);
int op_add(int a, int b);
int op_mul(int a, int b);
int op_sub(int a, int b);
int op_div(int a, int b);

/**
 * op_mod - Returns the remainder
 * @a: 1st number
 * @b: 2nd number
 * Return: result
 */

int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * op_add - Returns the sum
 * @a: 1st number
 * @b: 2nd number
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mul - Returns the product
 * @a: 1st number
 * @b: 2nd number
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_sub - Returns the difference
 * @a: 1st number
 * @b: 2nd number
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - Returns the division
 * @a: 1st number
 * @b: 2nd number
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}
