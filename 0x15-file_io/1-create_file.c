#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Name of the file to create.
 * @text_content: Content to write in the file.
 *
 * Return: 1 (Success), -1 in case of failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[n])
			n++;
		if (write(fd, text_content, n) != n)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
