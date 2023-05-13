#include "main.h"

/**
  * _strcmp - Comparing two strings
  * @s1: string one
  * @s2: string two
  * Return: value
  */

int _strcmp(char *s1, char *s2)
{
	int q = 0;

	while (s1[q] != '\0' && s2[q] != '\0')
	{
		if (s1[q] != s2[q])
	{
		return (s1[q] - s2[q]);
	}
	q++;
	}
	return (0);
}
