#include "main.h"
/**
 * print_last_digit - prints last digit of int
 *
 * @n: int to compute
 *
 * Return: 0 success
 *
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');
return (n);
}
