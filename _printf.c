#include "main.h"

/**
 * _printf - the printf function
 * @format: format
 * @...: arguments
 * Return: characters printed
 */

int _printf(const char *format, ...) {
    int chars_printed = 0;
    va_list list;
    
    if(format == NULL)
    return (-1);
    
    va_start(list, format);
    while(*format != '\0')
    {
        if(*format == '%')
        {
            format++;
            chars_printed = specifiers(format, list, chars_printed);
            format++;
        }
        else
        {
            write(1, format, 1);
            chars_printed++;
        }
    }
    va_end(list);
    return (chars_printed);
}
        }
        }
    }
}
