#include "holberton.h"
/**
 * _strcat - appends src string to dest string
 * @dest: string to be appended
 * @src: copied string
 *
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
return (dest);
}
