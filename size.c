#include "main.h"

/**
 * print_size - Calculates the size
 * @format: Format string to print arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */
int print_size(const char *format, int *i)
{
	int fpws = *i + 1;
	int size = 0;

	if (format[fpws] == 'l')
		size = S_LONG;
	else if (format[fpws] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = fpws - 1;
	else
		*i = fpws;

	return (size);
}
