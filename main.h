#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int my_putc(char c);
int my_str(va_list args, int count);
int my_chr(va_list args, int count);
int selectr(const char *format, va_list args, int pr);
int _printf(const char *format, ...);
int integer(va_list args, int pr);

#endif
