#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int my_putc(char c);
int my_puts(va_list lis);
int _printf(const char *format, ...);

#endif
