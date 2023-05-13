#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the lowest number of coins
 * @argc: amount
 * @argv: array
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int k, l, q;
	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	k = atoi(argv[1]);
	q = 0;

	if (k < 0)
	{
		printf("0\n");
		return (0);
	}
	for (l = 0; l < 5 && k >= 0; l++)
	{
		while (k >= change[l])
		{
		q++;
		k -= change[l];
		}
	}
	printf("%d\n", q);
	return (0);
}
