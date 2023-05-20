#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#define ERR_MSG "Error"

/**
 * is_digit - checks string for non-digit char
 * @s: string
 * Return: 0 non-digit, 1 otherwise
 */

int is_digit(char *s)
{
	int f = 0;

	while (s[f])
	{
		if (s[f] < '0' || s[f] > '9')
			return (0);
		f++;
	}
	return (1);
}

/**
 * _strlen - returns the length
 * @s: string
 * Return: the length
 */

int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
 * errors - shows errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two numbers
 * @argc: amount if arguments
 * @argv: array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *k, *m;
	int f, l, q, c, lb, bb, pw, *sl, tb = 0;

	k = argv[1], m = argv[2];
	if (argc != 3 || !is_digit(k) || !is_digit(m))
		errors();
	f = _strlen(k);
	l = _strlen(m);
	q = f + l + 1;
	sl = malloc(sizeof(int) * q);
	if (!sl)
		return (1);
	for (c = 0; c <= f + l; c++)
		sl[c] = 0;
	for (f = f - 1; f >= 0; f--)
	{
		bb = k[f] - '0';
		lb = 0;
		for (l = _strlen(m) - 1; l >= 0; l--)
		{
			pw = m[l] - '0';
			lb += sl[f + l + 1] + (bb * pw);
			sl[f + l + 1] = lb % 10;
			lb /= 10;
		}
		if (lb > 0)
		sl[f + l + 1] += lb;
	}
	for (c = 0; c < q - 1; c++)
	{
		if (sl[c])
			tb = 1;
		if (tb)
			_putchar(sl[c] + '0');
	}
	if (!tb)
		_putchar('0');
	_putchar('\n');
	free(sl);
	return (0);
}
