#include "main.h"

/**
 * create_buffer - Memory allocation for a buffer.
 * @file: Name of the file buffer is storing chars for.
 *
 * Return: A pointer to the new allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Duplicate the contents of a file to another file.
 * @argc: Number of arguments supplied to the program.
 * @argv: Array.
 *
 * Return: 0 (Success), or a positive integer if an error occurs.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		error_handler(98, argv[1]);

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		error_handler(99, argv[2]);

	do {
		r = read(from, buffer, BUFFER_SIZE);
		if (r == -1)
			error_handler(98, argv[1]);

		w = write(to, buffer, r);
		if (w == -1 || w != r)
			error_handler(99, argv[2]);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
