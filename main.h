#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int binary (int num);
int octal(int num);
void print_char(char c);
void print_string(char *str);

#endif
