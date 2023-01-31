#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet x10
 *
 * Return: 0 success
 *
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');
	}
}
