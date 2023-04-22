#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints all single digits
 * Return: Always (Success)
 */

int main(void)

{
	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	putchar('\n');

	return (0);
}
