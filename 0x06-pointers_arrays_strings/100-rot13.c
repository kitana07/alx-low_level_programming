#include "main.h"
#include <stdio.h>

/**
  * rot13 - Encode a string
  * @c: string
  * Return: c
  */

char *rot13(char *c)
{
	int m = 0;

	while (c[m])
	{
		while ((c[m] >= 'a' && c[m] <= 'z') || (c[m] >= 'A' && c[m] <= 'Z'))
		{
			if ((c[m] > 'm' && c[m] <= 'z') || (c[m] > 'M' && c[m] <= 'Z'))
			{
				c[m] -= 13;
				break;
			}
			c[m] += 13;
			break;
		}
		m++;
	}
	return (c);
}
