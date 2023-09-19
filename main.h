#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int _strlen(char *s);
int specifiers(const char *format, va_list list, int chars_printed);

int specifiers(const char *format, va_list list, chars_printed);
int print_c(va_list list, int chars_printed);
int print_s(va_list list, int chars_printed);
int print_sign(va_list list, int chars_printed);
int print_i(va_list list, int chars_printed);
int print_d(va_list list, int chars_printed);
int print_binary(va_list list, int chars_printed);
int print_u(va_list list, int chars_printed);

#endif
