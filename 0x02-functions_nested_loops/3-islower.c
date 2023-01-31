#include "main.h"
/**
 * _islower - checks if letter is lowercase
 * @c: integer to be checked
 *
 * Return: 1 if c is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}
