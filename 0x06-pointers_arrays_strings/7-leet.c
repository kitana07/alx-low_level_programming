#include "main.h"

/**
  * leet - Encodes string into 1337
  * @f: The string
  * Return: encoded string
  */

char *leet(char *f)
{
	int k, l;
	char str1[] = "aeotlAEOTL";
	char str2[] = "4307143071";

	for (k = 0; f[k] != '\0'; k++)
	{
		for (l = 0; l < 10; l++)
		{
			if (f[k] == str1[l])
			{
				f[k] = str2[l];
			}
		}
	}
	return (f);
}
