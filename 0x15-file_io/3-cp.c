#include "main.h"

/**
 * error_exit - Print an error message and exit with the given code.
 * @code: The exit code.
 * @format: The error message format.
 */
void error_exit(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code);
}

/**
 * main - Copy the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFSIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n");

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	dest_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (dest_fd == -1)
		error_exit(99, "Error: Can't write to file %s\n", argv[2]);

	while ((bytes_read = read(source_fd, buffer, BUFSIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit(99, "Error: Can't write to file %s\n", argv[2]);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(source_fd) == -1 || close(dest_fd) == -1)
		error_exit(100, "Error: Can't close file descriptor\n");

	return (0);
}

