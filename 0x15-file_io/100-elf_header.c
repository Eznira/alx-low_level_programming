#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>

/**
 * display_elf_header - Display information from ELF header
 * @filename: The name of the ELF file
 */
void display_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(2, "Error opening file %s\n", filename);
		exit(98);
	}

	Elf32_Ehdr elf_header;
	ssize_t bytes_read = read(fd, &elf_header, sizeof(Elf32_Ehdr));

	if (bytes_read != sizeof(Elf32_Ehdr) ||
	    memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		dprintf(2, "%s: Not an ELF file\n", filename);
		exit(98);
	}

	printf("ELF Header:\n");
	printf("	Magic:	");
	for (int i = 0; i < SELFMAG; i++)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\n");
	printf("	Class:		");
	if (elf_header.e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (elf_header.e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else
	{
		printf("Unknown\n");
	}
	/* Display other fields of the ELF header as needed */

	close(fd);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	display_elf_header(argv[1]);

	return (0);
}
