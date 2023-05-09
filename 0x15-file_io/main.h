#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_exit(const char *message);
void print_magic(const unsigned char *e_ident);
void print_class(const unsigned char *e_ident);
void print_data(const unsigned char *e_ident);
void print_version(const unsigned char *e_ident);
void print_osabi(const unsigned char *e_ident);
void print_type(unsigned int e_type);
void print_entry(unsigned long int e_entry);
void print_elf_header(const char *filename);
#endif
