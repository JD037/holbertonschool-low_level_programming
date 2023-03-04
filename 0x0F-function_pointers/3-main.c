#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, exit with error if incorrect number of arguments
 *	or invalid operator is passed
 */

int main(int argc, char **argv)
{
	int a, b, res;
	char *operator;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = argv[2];

	f = get_op_func(operator);

	if (f == NULL || ((*operator == '/' || *operator == '%') && b == 0) || \
			(*operator == '\0' && operator[1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	res = f(a, b);
	printf("%d\n", res);

	return (0);
}
