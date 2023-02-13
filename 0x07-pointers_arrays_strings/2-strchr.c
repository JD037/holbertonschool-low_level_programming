#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate a character in a string
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: pointer to first occurrence of character c in string s
 * or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
