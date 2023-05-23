#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns length
 * @s: string
 * Return: Amount
 */

int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}

/**
 * *_strcpy - copy the string
 * @dest: pointer to destination
 * @src: string
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0, f;

	while (src[l] != '\0')
	{
		l++;
	}

	for (f = 0; f < l; f++)
	{
		dest[f] = src[f];
	}
		dest[f] = '\0';

	return (dest);
}

/**
 * new_dog - creates new entry
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new entry (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;
	int k, l;

	k = _strlen(name);
	l = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (pup == NULL)
	return (NULL);

	pup->name = malloc(sizeof(char) * (k + 1));
	if (pup->name == NULL)
	{
		free(pup);
		return (NULL);
	}

	pup->owner = malloc(sizeof(char) * (l + 1));
	if (pup->owner == NULL)
	{
		free(pup);
		free(pup->name);
		return (NULL);
	}

	_strcpy(pup->name, name);
	_strcpy(pup->owner, owner);
	pup->age = age;

		return (pup);
}
