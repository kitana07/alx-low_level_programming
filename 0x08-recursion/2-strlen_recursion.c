#include "main.h"

/**
  * _strlen_recursion - Provides the length of a string
  * @s: the string
  * Return: Length
  */

int _strlen_recursion(char *s)
{
	int m = 0;

	if (*s)
	{
		m++;
		m += _strlen_recursion(s + 1);
	}
	return (m);
}
