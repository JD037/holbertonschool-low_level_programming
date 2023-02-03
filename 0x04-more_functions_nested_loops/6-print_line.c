#include "main.h"
/**
 * print_line - prints a straight line in terminal
 * @n: integer to be checked for line length
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
