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

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

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
