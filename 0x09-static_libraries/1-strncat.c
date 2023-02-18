#include "main.h"
/**
 * _strncat - concatenate strings using at most 'n' bytes from "src".
 * @dest: string to be added to
 * @src: string to add from
 * @n: number of bytes from src
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}

	while (b < n && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
