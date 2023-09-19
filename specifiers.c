#include "main.h"

int specifiers(const char *format, va_list list, int chars_printed)
{
    va_list list;
    va_start(list, format);

    int char_count = 0;

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            if (*format == '\0') break;
            if (*format == 'c') {
                char c = va_arg(list, int);
                write(1, &c, 1);
                chars_printed++;
            } else if (*format == 's') {
                char *s = va_arg(list, char *);
                while (*s != '\0') {
                    write(1, s, 1);
                    chars_printed++;
                    s++;
                }
            } else if (*format == '%') {
                char percent = '%';
                write(1, &percent, 1);
                char_count++;
            }
        } else {
            write(1, format, 1);
            char_count++;
        }
        format++;
    }

    va_end(list);
    return (chars_printed);
}
