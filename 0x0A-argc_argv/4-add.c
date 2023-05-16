#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * check_num - check for digit
 * @str: array
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int amt = 0;

	while (amt < strlen(str))
	{
		if (!isdigit(str[amt]))
		{
		return (0);
		}
		amt++;
	}
	return (1);
}

/**
 * main - the name
 * @argc: amount
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int amt = 1, wrd, tot = 0;

	while (amt < argc)
	{
		if (check_num(argv[amt]))
		{
			wrd = atoi(argv[amt]);
			tot += wrd;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		amt++;
	}
	printf("%d\n", tot);
	return (0);
}
