#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2) /* 0 and 1 are not prime numbers */
		return (0);
	if (n == 2) /* 2 is a prime number */
		return (1);
	if (n % 2 == 0) /* all even numbers are not prime */
		return (0);
	if (n == 3 || n == 5 || n == 7) /* 3, 5, and 7 are prime numbers */
		return (1);
	if (n % 3 == 0 || n % 5 == 0 || n % 7 == 0) /* multiples not prime */
		return (0);
	return (1);
}
