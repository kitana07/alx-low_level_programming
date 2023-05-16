#include "main.h"
#include <stdio.h>

/**
 * _atoi - a string to an integer
 * @s: string
 * Return: the int
 */

int _atoi(char *s)
{
	int c = 0, k = 0, m = 0, l = 0, f = 0, q = 0;

	while (s[l] != '\0')
		l++;

	while (c < l && f == 0)
	{
		if (s[c] == '-')
			++k;

		if (s[c] >= '0' && s[c] <= '9')
		{
			q = s[c] - '0';

			if (k % 2)
			q = -q;
			m = m * 10 + q;
			f = 1;

			if (s[c + 1] < '0' || s[c + 1] > '9')
			break;

			f = 0;
		}
		c++;
	}
	if (f == 0)
		return (0);
	return (m);
}

/**
 * main - multiplies 2 integers
 * @argc: number
 * @argv: array
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int amt, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	amt = a * b;

	printf("%d\n", amt);

	return (0);
}
