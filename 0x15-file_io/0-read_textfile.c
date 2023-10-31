#include "main.h"

/**
 * read_textfile - Read a text file and prints on the standard output POSIX.
 * @filename: Name of the file to read.
 * @letters: Numbers of letter to read and print.
 *
 * Return: Number of letters read and printed, 0 if an error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_n, write_n;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_n = read(fd, buffer, letters);
	close(fd);

	if (read_n == -1)
	{
		free(buffer);
		return (0);
	}

	write_n = write(STDOUT_FILENO, buffer, read_n);
	free(buffer);

	if (write_n == -1 || write_n != read_n)
		return (0);

	return (write_n);
}
