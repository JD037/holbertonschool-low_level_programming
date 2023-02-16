#include "main.h"

/**
 * _sqrt_recursion - Computes the natural square root of a number.
 * @n: The number to compute the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
	/* Base case */
	if (n < 0)
		return (-1);

	/* Recursive case */
	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - Helper function that recursively computes the natural square
 * root of a number.
 * @n: The number to compute the square root of.
 * @i: The current number being checked.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int sqrt_helper(int n, int i)
{
	/* Base case */
	if (i * i > n)
		return (-1);

	/* Base case */
	if (i * i == n)
		return (i);

	/* Recursive case */
	return (sqrt_helper(n, i + 1));
}
