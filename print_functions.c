#include "main.h"
#include <unistd.h>

void print_char(char c) {
    write(1, &c, 1);
}

void print_string(char *str) {
    while (*str) {
        print_char(*str);
        str++;
    }
}
