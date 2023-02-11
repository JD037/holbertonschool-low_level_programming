#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string to be capitalized.
 *
 * Return: pointer to modified string.
 */
char *cap_string(char *s)
{
	int i;
	char separators[] = {
	' ',
	'\t',
	'\n',
	',',
	';',
	'.',
	'!',
	'?',
	'"',
	'(',
	')',
	'{',
	'}',
	};

	for (i = 0; s[i]; i++)
	{
		if (i == 0 || strchr(separators, s[i - 1]))
		{
			if (islower(s[i]))
			{
				s[i] = toupper(s[i]);
			}
		}
	}
	return (s);
}
