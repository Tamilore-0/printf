#include "main.h"

/**
 * print_width - Calculates width
 * @format: Format string to print
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int print_width(const char *format, int *i, va_list list)
{
	int fpws;
	int width = 0;

	for (fpws = *i + 1; format[fpws] != '\0'; fpws++)
	{
		if (is_digit(format[fpws]))
		{
			width *= 10;
			width += format[fpws] - '0';
		}
		else if (format[fpws] == '*')
		{
			fpws++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = fpws - 1;

	return (width);
}
