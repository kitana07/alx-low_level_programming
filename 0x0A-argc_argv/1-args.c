#include "main.h"
#include <stdio.h>

/**
 * main - number of arguments passed to be printed
 * @argc: number
 * @argv: array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);
return (0);
}
