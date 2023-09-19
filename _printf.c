#include "main.h"

/**
 * _printf - customzed printf
 * @format: string or character input
 *
 * Return: characters printed
 */
int _printf(const char *format, ...)
{
	int chars_printed = 0;
	va_list list;

	va_start(list, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
				chars_printed = specifier_selection(format, list, chars_printed);
			format++;
		}
		else
		{
			_putchar(*format);
			format++;
			chars_printed++;
		}
	}
	va_end(list);
	return (chars_printed);
}
