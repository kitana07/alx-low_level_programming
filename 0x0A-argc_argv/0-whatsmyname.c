#include "main.h"
#include <stdio.h>

/**
 * main - prints the name
 * @argc: number
 * @argv: array
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
