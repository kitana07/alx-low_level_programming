#include "main.h"
#include <stdlib.h>

/**
 * count_word - count the number of words
 * @s: string
 * Return: amount
 */

int count_word(char *s)
{
	int f = 0, k, l = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			l++;
		}
	}
	return (l);
}

/**
 * **strtow - splits the string
 * @str: string
 * Return: pointer (Success) or NULL (Error)
 */

char **strtow(char *str)
{
	char **titan, *star;
	int m, k = 0, l = 0, wds, q = 0, beg, fs;

	while (*(str + l))
		l++;

	wds = count_word(str);
	if (wds == 0)
		return (NULL);

	titan = (char **) malloc(sizeof(char *) * (wds + 1));
	if (titan == NULL)
		return (NULL);

	for (m = 0; m <= l; m++)
	{

	if (str[m] == ' ' || str[m] == '\0')
	{
		if (q)
		{
			fs = m;
			star = (char *) malloc(sizeof(char) * (q + 1));

			if (star == NULL)
				return (NULL);

			while (beg < fs)
			*star++ = str[beg++];
			*star = '\0';
			titan[k] = star - q;
			k++;
			q = 0;
			}
		}
		else if (q++ == 0)
			beg = m;
	}
	titan[k] = NULL;
	return (titan);
}
