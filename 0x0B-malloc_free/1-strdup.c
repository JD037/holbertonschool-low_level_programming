#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the
 * string str
 * @str: the string to duplicate
 *
 * Return: On success, a pointer to the duplicated string. On error, NULL.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	/* Get the length of the string */
	for (len = 0; str[len]; len++)
		;

	/* Allocate memory for the duplicate string */
	dup_str = malloc(sizeof(char) * (len + 1));
	if (dup_str == NULL)
		return (NULL);

	/* Copy the string */
	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
