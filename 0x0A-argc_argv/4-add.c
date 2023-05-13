#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check for digit
 * @str: string
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int n;

	n = 0;

	while (n < strlen(str))
	{
		if (!isdigit(str[n]))
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/**
 * main - Print name
 * @argc: amount
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int m = 1, am = 0;
	int con;

	while (m < argc)
	{
		if (check_num(argv[m]))
		{
			con = atoi(argv[m]);
			am += con;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	m++;
	}
	printf("%d\n", am);
	return (0);
}
