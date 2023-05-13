#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: first occurrence
 * @accept: the string
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; q++)
		{
		if (*s == accept[q])
			return (s);
		}
		s++;
	}
	return ('\0');
}
