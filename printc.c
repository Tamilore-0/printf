#include "main.h"
#include <unistd.h>

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

	write(1, &c, 1);
	chars_printed++;
	return (chars_printed);
}
