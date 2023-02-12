#include "holberton.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: input string
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return &s[i];
		}
		i++;
	}
	if (c == '\0')
	{
		return &s[i];
	}
	return (NULL);
}

