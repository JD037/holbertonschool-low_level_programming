#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		i++;
	}
	i--;
	if (argv[0])
	{
		printf("%d\n", i);
	}
	return (0);
}
