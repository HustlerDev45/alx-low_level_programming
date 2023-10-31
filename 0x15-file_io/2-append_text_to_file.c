#include "main.h"

/**
 * append_text_to_file - Adds text at the end of the file.
 * @filename: Name of the file.
 * @text_content: Text to add at the end of the file.
 *
 * Return: 1 (Success), -1 in case of failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
