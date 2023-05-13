#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to a num
 * @s: string
 * Return: the nunber
 */

int _atoi(char *s)
{
	int f = 0, k = 0, l = 0, m = 0, q = 0, y = 0;
	
	while (s[m] != '\0')
		m++;

	while (f < m && q == 0)
	{
		if (s[f] == '-')
			++k;

		if (s[f] >= '0' && s[f] <= '9')
		{
			y = s[f] - '0';
			if (k % 2)
				y = -y;
			l = l * 10 + y;
			q = 1;
			if (s[f + 1] < '0' || s[f + 1] > '9')
				break;
			q = 0;
		}
		f++;
	}

	if (q == 0)
		return (0);
	return (l);
}

/**
 * main - times two numbers
 * @argc: number
 * @argv: array
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int ans, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	ans = a * b;

	printf("%d\n", ans);
	return (0);
}
