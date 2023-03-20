#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * error - Print an error message and exit the program with a given code
 *
 * @msg: The error message to print
 * @file: The name of the file causing the error
 * @code: The exit code to use
 */
void error(const char *msg, char *file, int code)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(code);
}

/**
 * main - Copy the contents of one file to another file
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 97-100 on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, n_read, n_write;
	char buffer[BUFFER_SIZE];
	char fd_from_str[10]; /* buffer for converting fd_from to string */
	char fd_to_str[10]; /* buffer for converting fd_to to string */

	if (argc != 3)
		error("Usage: %s file_from file_to\n", argv[0], 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error("Error: Can't read from file %s\n", argv[1], 98);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error("Error: Can't write to %s\n", argv[2], 99);

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_write = write(fd_to, buffer, n_read);
		if (n_write == -1)
			error("Error: Can't write to %s\n", argv[2], 99);
	}

	if (n_read == -1)
		error("Error: Can't read from file %s\n", argv[1], 98);

	sprintf(fd_from_str, "%d", fd_from); /* convert fd_from to string */
	sprintf(fd_to_str, "%d", fd_to); /* convert fd_to to string */

	if (close(fd_from) == -1)
		error("Error: Can't close fd %d for %s\n", argv[1], errno);

	if (close(fd_to) == -1)
		error("Error: Can't close fd %d for %s\n", argv[2], errno);

	return (0);
}
