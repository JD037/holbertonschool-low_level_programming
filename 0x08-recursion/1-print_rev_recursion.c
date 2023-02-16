#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse, using recursion.
 * @s: string to be reversed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* base case: end of string */
		return;

	_print_rev_recursion(s + 1); /* recursive call: print the rest of the string */
	_putchar(*s); /* print the current character */
}
