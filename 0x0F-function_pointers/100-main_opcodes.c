#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints its own operation codes
 * @argc: arguments
 * @argv: array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int f, l;
	char *q;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	f = atoi(argv[1]);

	if (f < 0)
	{
		printf("Error\n");
		exit(2);
	}

	q = (char *)main;

	for (l = 0; l < f; l++)
	{
		if (l == f - 1)
		{
			printf("%02hhx\n", q[l]);
			break;
		}
		printf("%02hhx ", q[l]);
	}
	return (0);
}
