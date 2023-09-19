#include "main.h"

/**
 * printc - prints characeter to standard output
 * @list: variadic list
 * @chars_printed: character count
 *
 * Return: characters printed
 */
int printc(va_list list, int chars_printed)
{
	int c = va_arg(list, int);

	chars_printed += 1;
	_putchar(c);
	return (chars_printed);
}

