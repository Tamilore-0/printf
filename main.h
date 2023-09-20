#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

int _printf(const char *format, ...);
int _strlen(char *str);
int _putchar(char c);
/**
 * struct frt - Struct op
 *
 * @frt: The format.
 * @fn: The function associated.
 */
struct frt
{
	char frt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct frt frt_t - Struct op
 *
 * @frt: The format.
 * @frt_t: The function associated.
 */
typedef struct frt frt_t;

int fpws_print(const char *frt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/* functions */
int specifier_selection(const char *format, va_list list, int chars_printed);
int print_flags(const char *format, int *);
int print_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int print_size(const char *format, int *i);
int print_printable(char j)
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
int printR(va_list list, int chars_printed);
#endif
