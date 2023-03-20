#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * _copy_files- copies files from one file to another
 * in 1024 byte chunks
 * @from: file descriptor to copy from
 * @to: file descriptor to copy to
 * @argv: names of files
 *
 * Return: void return
 */
void _copy_files(int from, int to, char **argv)
{
	int buf, wr;
	char str[BUFFER_SIZE];

	buf = BUFFER_SIZE;
	while (buf == BUFFER_SIZE)
	{
		buf = read(from, str, BUFFER_SIZE);
		if (buf == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		wr = write(to, str, buf);
		if (wr == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

}

/**
 * _close_files- closes files
 * @from: fd for from file
 * @to: fd for to file
 *
 * Return: void return
 */
void _close_files(int from, int to)
{
	if (close(from) == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", to);
		exit(100);
	}
}

/**
 * main- copies contents from one file to another
 * @argc: number of arguments
 * @argv: value of arguments
 * Usage : cp file_from file_to
 * Return: 98 if file from is not accessable 99 if file_to
 * creation or writing fails 100 if file cannot be closed
 */
int main(int argc, char **argv)
{
	int from, to;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(1);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	_copy_files(from, to, argv);
	_close_files(from, to);

	return (0);
}
