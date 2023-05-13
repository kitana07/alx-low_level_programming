#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: amount
 * @argv: array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
return (0);
}
