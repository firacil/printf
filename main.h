#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

int my_putc(char c);
int my_str(va_list args, int count);
int my_chr(va_list args, int count);
int selectr(const char *format, va_list args, int pr);
int _printf(const char *format, ...);
int integer(va_list args, int pr);
int pr_per(void);
int pr_bin(unsigned int num, int pr);
int _hex(unsigned int num, int pr, int uc);
#endif
