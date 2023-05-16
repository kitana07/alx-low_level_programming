#include "main.h"
#include <stdio.h>

/**
 * main - print arguments
 * @argc: number
 * @argv: array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
