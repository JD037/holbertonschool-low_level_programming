#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1 = 0, len2 = 0;

	/* Handle NULL strings by setting them to empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get the lengths of the two strings */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for the concatenated string */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL) /* Check if malloc failed */
		return (NULL);

	/* Copy the characters from s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy the characters from s2 into concat */
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	/* Add the null character to the end of concat */
	concat[i + j] = '\0';

	/* Return a pointer to the concatenated string */
	return (concat);
}
