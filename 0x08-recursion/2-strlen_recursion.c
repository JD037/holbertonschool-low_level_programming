#include "main.h"

/**
 * _strlen_recursion - function that return len of string with recursion
 * @s: string to get length of
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
