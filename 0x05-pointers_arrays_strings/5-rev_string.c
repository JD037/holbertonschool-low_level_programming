#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string being reversed
 */
void rev_string(char *s)
{
	int i;
	int len = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
