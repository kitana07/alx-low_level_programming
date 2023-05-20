#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates memory
 * @ptr: pointer to the memory
 * @old_size: size
 * @new_size: new size
 * Return: pointer to new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *f;
	char *l;
	unsigned int q;

	if (new_size == old_size)

		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)

		return (malloc(new_size));

	f = malloc(new_size);
	if (!f)

		return (NULL);

	l = ptr;

	if (new_size < old_size)
	{
		for (q = 0; q < new_size; q++)
			f[q] = l[q];
	}

	if (new_size > old_size)
	{
		for (q = 0; q < old_size; q++)
			f[q] = l[q];
	}

	free(ptr);
	return (f);
}
