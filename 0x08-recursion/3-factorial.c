#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: the input number
 *
 * Return: the factorial of the number, or -1 if n is negitive
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
