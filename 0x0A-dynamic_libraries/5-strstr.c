#include "main.h"
#include <stdio.h>

/**
 * _strstr - find the first occurrence of the substring needle
 * in the string haystack.
 * @haystack: string to search in.
 * @needle: substring to search for.
 *
 * Return: pointer to the first character of the located substring,
 * or NULL if substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int len1 = 0; /* index for haystack */
	unsigned int len2 = 0; /* index for needle */

	/* loop through haystack until end of string is reached */
	while (haystack[len1] != '\0')
	{
		len2 = 0; /* reset index for needle on each iteration */

		/* loop through needle until end of string is reached */
		while (needle[len2] != '\0')
		{
			/* compare characters at corresponding indices */
			if (haystack[len1] == needle[len2])
			{
				len1++; /* move to next character in haystack */
				len2++; /* move to next character in needle */
			}
			else
			{
				break; /* exit loop on mismatch */
			}
		}

		/* check if needle has been fully matched */
		if (needle[len2] == '\0')
		{
			return (haystack + (len1 - len2)); /* return pointer */
		}

		/* move to next character in haystack */
		len1 = len1 - len2 + 1;
	}

	/* return NULL if needle is not found in haystack */
	return (NULL);
}
