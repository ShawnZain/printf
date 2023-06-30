#ifndef MAIN_H
#define MAIN_H

#include <unistd.h> /* write */
#include <stdarg.h> /* variadic functions */
#include <stdio.h>
#include <stdlib.h> /* malloc, free */

int _putchar(char c);
int print_string(char *c);
int print_int(int num);
int digit_count(int num);
int my_printf(const char *format, ...);

#endif /* MAIN_H */
