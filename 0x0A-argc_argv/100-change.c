#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - shows amount of coins
 * @argc: number
 * @argv: arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int k, l, q;
	int m[] = {25, 10, 5, 2, 1};

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
		while (k >= m[l])
		{
			q++;
			k -= m[l];
		}
	}
	printf("%d\n", q);
	return (0);
}
