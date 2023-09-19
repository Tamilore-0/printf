#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
int _strlen(char *str);
int _putchar(char c);


int specifier_selection(const char *format, va_list list, int chars_printed);
int printc(va_list list, int chars_printed);
int prints(va_list list, int chars_printed);
int printd(va_list list, int chars_printed);
int printi(va_list list, int chars_printed);
int printu(va_list list, int chars_printed);
int printx(va_list list, int chars_printed);
int printX(va_list list, int chars_printed);
int printo(va_list list, int chars_printed);
int printr(va_list list, int chars_printed);
int printb(va_list list, int chars_printed);
int printp(va_list list, int chars_printed);
#endif
