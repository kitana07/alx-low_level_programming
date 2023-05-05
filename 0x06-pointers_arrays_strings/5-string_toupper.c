#include "main.h"

/**
 * string_toupper - Changes all lowercase to uppercase.
 * @sen: The string to be changed.
 * Return: sen
 */

char *string_toupper(char *sen)
{
	int q = 0;

	while (sen[q] != '\0')
	{
		if (sen[q] >= 'a' && sen[q] <= 'z')
		sen[q] = sen[q] - 32;
		q++;
	}
	return (sen);
}
