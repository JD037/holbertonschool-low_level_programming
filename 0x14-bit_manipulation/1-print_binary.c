#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_count = sizeof(unsigned long int) * 8;
	int found_one = 0;

	while (bit_count--)
	{
		if ((n & (mask << bit_count)) != 0)
		{
			_putchar('1');
			found_one = 1;
		}
		else if (found_one || bit_count == 0)
			_putchar('0');
	}
}
