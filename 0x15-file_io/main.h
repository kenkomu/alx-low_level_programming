#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define EXIT_WRONG_PARAMETER 97
#define EXIT_READ_ERROR 98
#define EXIT_WRITE_ERROR 99
#define EXIT_CLOSE_ERROR 100
#define BUFFER_SIZE 1024
#define DEFAULT_WRITE_RIGHTS 0664
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif

