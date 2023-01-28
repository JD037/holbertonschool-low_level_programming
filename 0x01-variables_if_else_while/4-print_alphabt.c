#include <stdio.h>

/**
 * main - display alphabat minus 'q' an 'e'
 *
 * Return: 0
 */
int main(void)
{
	int character;

	character = 'a';
	while (character <= 'z')
	{
		if (character != 'q' && character != 'e')
			putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
