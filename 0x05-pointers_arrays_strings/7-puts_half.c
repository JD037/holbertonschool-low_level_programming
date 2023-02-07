#include "main.h"
/**
 * puts_half - print second half of string
 * @str: string to print second half of
 */
void puts_half(char *str)
{
	int i, length = 0;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (length - 1) / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
