#include "main.h"
/**
 * puts2 - display every other character of string
 * @i: string to print
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
