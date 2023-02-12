#include "holberton.h"
/**
 * cap_string - capitalize all word of string
 * @s: string to cap
 *
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int i;
	int prev_space = 1;

	for (i = 0; s[i]; i++)
	{
		if (prev_space && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
		}

		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
			|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
			|| s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
			|| s[i] == '}')
		{
			prev_space = 1;
		}
		else
		{
			prev_space = 0;
		}
	}

	return (s);
}
