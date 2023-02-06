#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * get_elf - checks if a file is an ELF file
 * @e_ident: pointer to an array containing the ELF file magic numbers
 *
 * Return: (void)
 */
void get_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * get_elf_magic_numbers - prints the magic numbers of an ELF header
 * @e_ident: pointer to an array containing the ELF magic numbers
 *
 * Return: (void)
 */
void get_elf_magic_numbers(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * get_elf_class - prints the class of an ELF header
 * @e_ident: pointer to an array containing the ELF class
 *
 * Return: (void)
 */
void get_elf_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * get_elf_data - prints the data of an ELF header
 * @e_ident: pointer to an array containing the ELF class
 *
 * Return: (void)
 */
void get_elf_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * get_elf_version - prints the version of an ELF header
 * @e_ident: pointer to an array containing the ELF version
 *
 * Return: (void)
 */
void get_elf_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * get_elf_osabi - prints the OS/ABI of an ELF header
 * @e_ident: pointer to an array containing the ELF version
 *
 * Return: (void)
 */
void get_elf_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
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
	}
}

/**
 * get_elf_abi - prints the ABI version of an ELF header
 * @e_ident: a pointer to an array containing the ELF ABI version
 *
 * Return: (void)
 */
void get_elf_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * get_elf_type - prints the type of an ELF header
 * @e_type: ELF type
 * @e_ident: pointer to an array containing the ELF class
 *
 * Return: (void)
 */
void get_elf_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * get_elf_entry - prints the entry point of an ELF header
 * @e_entry: the address of the entry point of the ELF file
 * @e_ident: pointer to an array containing the ELF class
 *
 * Return: (void)
 */
void get_elf_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Return: (void)
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - print information contained in an ELF file header
 * @argc: number of arguments passed to the main function
 * @argv: array of string arguments passed to the main function
 *
 * Return: (int) 0 - on success, else 98 on failure
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *e_hdr;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	e_hdr = malloc(sizeof(Elf64_Ehdr));
	if (e_hdr == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, e_hdr, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(e_hdr);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	get_elf(e_hdr->e_ident);
	printf("ELF Header:\n");
	get_elf_magic_numbers(e_hdr->e_ident);
	get_elf_class(e_hdr->e_ident);
	get_elf_data(e_hdr->e_ident);
	get_elf_version(e_hdr->e_ident);
	get_elf_osabi(e_hdr->e_ident);
	get_elf_abi(e_hdr->e_ident);
	get_elf_type(e_hdr->e_type, e_hdr->e_ident);
	get_elf_entry(e_hdr->e_entry, e_hdr->e_ident);

	free(e_hdr);
	close_elf(o);
	return (0);
}
