#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: bytes
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *q;

	q = malloc(b);

	if (q == NULL)
	exit(98);
	
	return (q);
}
