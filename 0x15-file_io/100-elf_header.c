#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Arguments vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	int fd;
	ssize_t n;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Cannot open %s\n", argv[1]);
		exit(98);
	}
	n = read(fd, &ehdr, sizeof(ehdr));
	if (n == -1 || n != sizeof(ehdr))
	{
		fprintf(stderr, "Cannot read %s\n", argv[1]);
		close(fd);
		exit(98);
	}
	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 || ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
		ehdr.e_ident[EI_MAG2] != ELFMAG2 || ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "%s is not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}
	printf("ELF Header:\n");
	print_magic(ehdr.e_ident);
	print_class(ehdr.e_ident);
	print_data(ehdr.e_ident);
	print_version(ehdr.e_ident);
	print_osabi(ehdr.e_ident);
	print_abiversion(ehdr.e_ident);
	print_type(ehdr.e_type);
	print_entry(ehdr.e_entry);
	close(fd);
	return (0);
}
