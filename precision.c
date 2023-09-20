#include "main.h"

/**
 * get_precision - Calculates precision
 * @format: Format string to print
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int fpws = *i + 1;
	int precision = -1;

	if (format[fpws] != '.')
		return (precision);

	precision = 0;

	for (fpws += 1; format[fpws] != '\0';fpws++)
	{
		if (is_digit(format[fpws]))
		{
			precision *= 10;
			precision += format[fpws] - '0';
		}
		else if (format[fpws] == '*')
		{
			fpws++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = fpws - 1;

	return (precision);
}
