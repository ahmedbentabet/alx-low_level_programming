#include "main.h"
#include <elf.h>

/**
 * main - Entry point for displaying ELF header information.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		return (EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd);
		return (EXIT_FAILURE);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		close(fd);
		return (EXIT_FAILURE);
	}

	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x\n",
		header.e_ident[EI_MAG0], header.e_ident[EI_MAG1],
		header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);
	printf("  Class:                             %s\n",
		header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}

