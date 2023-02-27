#include "main.h"
/**
 * _puts - prints string new line to stdout
 * @str: string being printed
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
