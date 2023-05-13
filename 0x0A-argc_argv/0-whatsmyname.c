#include <stdio.h>
#include "main.h"

/**
 * main - prints the name
 * @argc: argument amount
 * @argv: argument array
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

return (0);
}
