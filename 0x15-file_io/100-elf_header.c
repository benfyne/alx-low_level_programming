#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define ELF_MAGIC 0x7f454c46

	int main(int argc, char *argv[])
	{
		if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(1);
	}
	int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		perror("open");
		exit(1);
	}
	unsigned char magic[4];
	
	if (read(fd, magic, sizeof(magic)) != sizeof(magic))
	{
		perror("read");
		exit(1);
	}
	if (magic[0] != ELF_MAGIC)
	{
		fprintf(stderr, "File is not an ELF file\n");
		exit(98);
	}
	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x\n", magic[0], magic[1], magic[2], magic[3]);
	printf("  Class:                             %d (%s)\n", magic[4], magic[4] == 1 ? "ELF32" : "ELF64");
	printf("  Data:                              %d (%s)\n", magic[5], magic[5] == 1 ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", magic[6] + magic[7] * 256);
	printf("  OS/ABI:                            %#x\n", magic[8] + magic[9] * 256);
	printf("  ABI Version:                       %d\n", magic[10] + magic[11] * 256);
	printf("  Type:                              %#x\n", magic[12] + magic[13] * 256);
	printf("  Entry point address:               %#x\n", *(unsigned int *)(magic + 16));	
	close(fd);
	return (0);
