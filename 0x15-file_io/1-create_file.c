#include "main.h"

/**
 * create_file - creates a file and writes a string to it
 * @filename: the name of the file to create
 * @text_content: the string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, i;

	if (filename == NULL)
		return (-1);

	/* open the file with the correct permissions */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* count the number of bytes in the string */
		for (i = 0; text_content[i] != '\0'; i++)
			;
		/* write the string to the file */
		bytes_written = write(fd, text_content, i);
		if (bytes_written == -1)
			return (-1);
	}

	/* close the file and return success */
	close(fd);
	return (1);
}
