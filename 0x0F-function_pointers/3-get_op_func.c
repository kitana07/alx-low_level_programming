#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function
 * @s: The operator passed
 * Return: A pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int q = 0;

	while (ops[q].op != NULL && *(ops[q].op) != *s)
	q++;

	return (ops[q].f);
}
