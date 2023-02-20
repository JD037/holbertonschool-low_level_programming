#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	/* Check that the program received two arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the arguments to integers */
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	/* Multiply the numbers and store the result */
	result = a * b;

	/* Print the result followed by a newline */
	printf("%d\n", result);

	return (0);
}
