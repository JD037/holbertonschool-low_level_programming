#include <stdio.h>

/**
 * main - print alphabet in upper and lower case.
 *
 * Return: 0
 */
int main(void)
{
	int character;

	character = 'a';
	while (character <= 'z')
	{
		putchar(character);
		character++;
	}

	character = 'A';
	while (character <= 'Z')
	{
		putchar(character);
		character++;
	}

	putchar('\n');
	return (0);
}
