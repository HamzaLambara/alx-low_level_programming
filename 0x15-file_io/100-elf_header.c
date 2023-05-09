#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 64

/**
 * error_exit - Print error message and exit with status code 98
 * @msg: The error message to display
 */
void error_exit(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * print_magic - Print the ELF magic numbers
 * @e_ident: Pointer to the ELF identification array
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", e_ident[i]);
	printf("\n");
}

/**
 * print_class - Print the ELF class
 * @e_ident: Pointer to the ELF identification array
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("None\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown>\n");
		break;
	}
}

/**
 * print_data - Print the ELF data encoding
 * @e_ident: Pointer to the ELF identification array
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("None\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown>\n");
		break;
	}
}

/**
 * print_version - Print the ELF version
 * @e_ident: Pointer to the ELF identification array
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d (current)\n", e_ident[EI_VERSION]);
}

/**
 * print_osabi - Print the OS/ABI
 * @e_ident: Pointer to the ELF identification array
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
		break;
	}
}

/**
 * print_type - Print the ELF file type
 * @e_type: The ELF file type
 */
void print_type(unsigned int e_type)
{
	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
		printf("None (Unknown type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown>\n");
		break;
	}
}

/**
 * print_entry - Print the entry point address
 * @e_entry: The entry point address
 */
void print_entry(unsigned long int e_entry)
{
	printf("  Entry point address:               0x%lx\n", e_entry);
}

/**
 * print_elf_header - Print the ELF header information
 * @filename: The name of the ELF file
 */
void print_elf_header(const char *filename)
{
	int fd;
	Elf64_Ehdr elf_header;
	ssize_t bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		error_exit("Error opening file");

	bytes_read = read(fd, &elf_header, sizeof(elf_header));
	if (bytes_read == -1)
		error_exit("Error reading file");

	if ((size_t)bytes_read < sizeof(Elf64_Ehdr))
		error_exit("File too small to be an ELF file");

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
	    elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
	    elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
	    elf_header.e_ident[EI_MAG3] != ELFMAG3)
		error_exit("Not an ELF file");

	printf("ELF Header:\n");
	print_magic(elf_header.e_ident);
	print_class(elf_header.e_ident);
	print_data(elf_header.e_ident);
	print_version(elf_header.e_ident);
	print_osabi(elf_header.e_ident);
	print_type(elf_header.e_type);
	print_entry(elf_header.e_entry);

	close(fd);
}

/**
 * main - Entry point of the program
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return 98;
	}

	print_elf_header(argv[1]);

	return 0;
}

