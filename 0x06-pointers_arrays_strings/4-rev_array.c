#include "holberton.h"
/**
 * reverse_array - reverse the content of an array of integers.
 * @a: pointer to the first element of the array
 * @n: the number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
