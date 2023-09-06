#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <stdlib.h>
#include <string.h>

#define ERROR 98
#define MAGIC "\177ELF"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: exit status
 */

int main(int argc, char *argv[])
{
	int fd, i, bytes_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage:elf_header elf_filename\n");
		return (ERROR);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file\n");
		return (ERROR);
	}
	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1)
	{
		fprintf(stderr, "Error: Can't read file\n");
		close(fd);
		return (ERROR);
	}

	if (memcmp(header.e_ident, MAGIC, strlen(MAGIC)) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		return (ERROR);
	}

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	putchar('\n');

	printf("Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:                            UNIX - System V\n");
	printf("ABI Version:                       %d\n", header.e_ident[EI_OSABI]);
	printf("Type:                              %s\n", header.e_type == ET_REL ? "REL (Relocatable file)" : header.e_type == ET_EXEC ? "EXEC (Executable file)" : header.e_type == ET_DYN ? "DYN (Shared object file)" : "None");
	printf("Entry point address:               %#lx\n", header.e_entry);

	close(fd);
	return (0);
}
