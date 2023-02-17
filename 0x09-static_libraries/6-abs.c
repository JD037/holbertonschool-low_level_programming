#include "main.h"
/**
 * _abs - compute absolute value of int
 * @n: int to compute
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
