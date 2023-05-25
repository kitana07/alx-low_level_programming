#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the result
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int k, l;
	char *q;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	k = atoi(argv[1]);
	q = argv[2];
	l = atoi(argv[3]);

	if (get_op_func(q) == NULL || q[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*q == '/' && l == 0) || (*q == '%' && l == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(q)(k, l));

	return (0);
}
