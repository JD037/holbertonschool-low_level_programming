#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	/* loop through all arguments */
	for (i = 0; i < argc; i++)
	{
		/* loop through each character in the current argument */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* print the current character */
			printf("%c", argv[i][j]);
		}

		/* print a newline character to separate the arguments */
		printf("\n");
	}

	return (0);
}
