#include "holberton.h"
/**
 * leet - encodes an string into 1337
 * @s: string to encode
 *
 * Return: encode string
 */
char *leet(char *s)
{
	int i, j;
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int numbers[10] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j] / 10 + '0';
				s[i + 1] = numbers[j] % 10 + '0';
				break;
			}
		}
	}

	return (s);
}
