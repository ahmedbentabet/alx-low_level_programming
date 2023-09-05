#include "main.h"

/**
 * main - entry point
 * description: copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 97-100 on failure
 */
int main(int argc, char *argv[])
{
	int fd_source, fd_destination, read_bytes, write_bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Open source file */
	fd_source = open(argv[1], O_RDONLY);
	if (fd_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Open destination file */
	fd_destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_destination == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	/* Read from source file and write to destination file */
	while ((read_bytes = read(fd_source, buffer, 1024)) > 0)
	{
		write_bytes = write(fd_destination, buffer, read_bytes);
		if (write_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_source) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_source), exit(100);

	if (close(fd_destination) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_destination), exit(100);

	return (0);
}
