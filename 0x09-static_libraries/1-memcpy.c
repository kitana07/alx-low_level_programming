#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: location to be stored
 * @src: memory to be copied
 * @n: total of bytes
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n, q = 0;

	for (; q < i; q++)
	{
		dest[q] = src[q];
		n--;
	}
	return (dest);
}
