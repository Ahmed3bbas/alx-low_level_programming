#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include <string.h>
#include "main.h"


void print_elf_header(ELF_HEADER header);

/**
 * main - read and print header file
 * @ac: number of args
 * @av: args to (to get name of the elf file)
 * Return: 0 for sucess state or exit code
*/
int main(int ac, char **av)
{
	int fd;
	unsigned char magic[4];
	ELF_HEADER header;

	if (ac != 2)
	{
		printf("Usage: elf_header elf_filename\n");
		exit(97);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", strerror(fd));
		exit(98);
	}

	read(fd, magic, 4);
	if (magic[0] != 0x7F || magic[1] != 'E' || magic[2] != 'L' || magic[3] != 'F')
	{
		fprintf(stderr, "Error not an elf file\n");
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);

	read(fd, &header, sizeof(header));
	print_elf_header(header);

	close(fd);
	return (0);
}

/**
 * print_elf_header - print header of elf file with mapping to get better info
 * @header: struct header file
 * Return: void
*/

void print_elf_header(ELF_HEADER header)
{
	int i = 0;
	unsigned int c;

	printf("ELF Header:\n");
	printf("Magic: ");
	while (i < 16)
	{
		printf("%02x ", header.ident[i]);
		i++;
	}
	printf("\n");

	i = header.ident[4];
	printf("Class: ");
	if (i == 1)
		printf("ELF32\n");
	else if (i == 2)
		printf("ELF64\n");
	else
		printf("Unknown\n");

	c = header.ident[5];
	printf("Data: ");
	if (c == 1)
		printf("2's complement, little endian\n");
	else if (c == 2)
		printf("2's complement, big endian\n");
	else
		printf("Unknown\n");

	printf("Version: %d (current)\n", header.ident[6]);

	c = header.ident[7];
	printf("OS/ABI: ");
	if (c == 0x00)
		printf("UNIX - System V\n");
	else if (c == 0x01)
		printf("HP-UX\n");
	else if (c == 0x02)
		printf("NetBSD\n");
	else if (c == 0x03)
		printf("Linux\n");
	else if (c == 0x04)
		printf("GNU Hurd\n");
	else if (c == 0x06)
		printf("Solaris\n");
	else if (c == 0x07)
		printf("AIX (Monterey)\n");
	else if (c == 0x08)
		printf("IRIX\n");
	else if (c == 0x09)
		printf("FreeBSD\n");
	else if (c == 0x0A)
		printf("Tru64\n");
	else if (c == 0x0B)
		printf("Novell Modesto\n");
	else if (c == 0x0C)
		printf("OpenBSD\n");
	else if (c == 0x0D)
		printf("OpenVMS\n");
	else if (c == 0x0E)
		printf("NonStop Kernel\n");
	else if (c == 0x0F)
		printf("AROS\n");
	else if (c == 0x10)
		printf("FenixOS\n");
	else if (c == 0x11)
		printf("Nuxi CloudABI\n");
	else if (c == 0x12)
		printf("Stratus Technologies OpenVOS\n");
	else
		printf("Unknown\n");

	printf("ABI Version: %d\n", header.ident[8]);

	c = header.type[0];
	printf("Type: ");

	if (c == 0x0000)
		printf("NONE (Unknown)\n");
	else if (c == 0x0001)
		printf("REL (Relocatable file)\n");
	else if (c == 0x0002)
		printf("EXEC (Executable file)\n");
	else if (c == 0x0003)
		printf("DYN (Shared object file)\n");
	else if (c == 0x0004)
		printf("CORE (Core file)\n");
	else if (c == 0xFE00)
		printf("LOOS (Reserved inclusive range) (Operating system specific)\n");
	else if (c == 0xFEFF)
		printf("HIOS (Reserved inclusive range) (Operating system specific)\n");
	else if (c == 0xFF00)
		printf("LOPROC (Reserved inclusive range) (Processor specific)\n");
	else if (c == 0xFFFF)
		printf("HIPROC (Reserved inclusive range) (Processor specific)\n");
	else
		printf("Unknown\n");
	printf("Entry point address: %#x\n", (int)header.entry);

}
