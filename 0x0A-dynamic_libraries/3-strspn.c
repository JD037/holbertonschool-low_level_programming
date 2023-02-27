#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to the accepted characters
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (count);
}
