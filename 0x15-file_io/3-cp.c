#include "main.h"

/** 
 * error_handler - Handle and prints error message.
 * @err: Error code.
 * @file: Name of the file.
 */
void error_handler(int err, char *file)
{
        if (err == 97)
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        else if (err == 98)
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
        else if (err == 99)
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
        else
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", err);
        exit(err);
}

/**
 * main - Duplicate the content of a file to another.
 * @argc: Number of arguments.
 * @argv: Array.
 *
 * Return: 0 (Success), otherwise error code.
 */
int main(int argc, char *argv[])
{
        int fd_from, fd_to;
        ssize_t n;
        char buffer[BUFFER_SIZE];

        if (argc != 3)
                error_handler(97, NULL);

        fd_from = open(argv[1], O_RDONLY);
        if (fd_from == -1)
                error_handler(98, argv[1]);

        fd_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND, 0664);
        if (fd_to == -1)
                error_handler(99, argv[2]);

        while ((n = read(fd_from, buffer, BUFFER_SIZE)) > 0)
                if (write(fd_to, buffer, n) != n)
                        error_handler(99, argv[2]);

        if (n == -1)
                error_handler(98, argv[1]);

        if (close(fd_from) == -1)
                error_handler(fd_from, NULL);

        if (close(fd_to) == -1)
                error_handler(fd_to, NULL);

        return (0);
}
