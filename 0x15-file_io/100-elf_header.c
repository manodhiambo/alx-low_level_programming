#include <elf.h>

/**
 * @program: displays the information in the ELF header
 * @the start of an ELF file
 * @usage: elf_header elf_filename
 * Return: int
 */

 1 typedef struct {
            unsigned char e_ident[EI_NIDENT];
            Elf32_Half    e_type;
            Elf32_Half    e_machine;
  5         Elf32_Word    e_version;
            Elf32_Addr    e_entry;
            Elf32_Off     e_phoff;
            Elf32_Off     e_shoff;
            Elf32_Word    e_flags;
 10         Elf32_Half    e_ehsize;
            Elf32_Half    e_phentsize;
            Elf32_Half    e_phnum;
            Elf32_Half    e_shentsize;
            Elf32_Half    e_shnum;
 15         Elf32_Half    e_shstrndx;
    } Elf32_Ehdr;
