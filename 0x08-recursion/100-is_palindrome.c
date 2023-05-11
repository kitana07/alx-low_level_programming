#include "main.h"

/**
 * _strlen_recursion - returns the length
 * @s: string
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}

/**
 * comparator - compares the characters
 * @s: the string
 * @k: smallest iterator.
 * @m: biggest iterator.
 * Return: nothing
 */

int comparator(char *s, int k, int m)
{
	if (*(s + k) == *(s + m))
	{
	if (k == m || k == m + 1)
		return (1);
	return (0 + comparator(s, k + 1, m - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: the string
 * Return: 1 if a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
