#include "main.h"

/**
 * prints - prints string to standard output
 * @list: variadic list
 * @chars_printed: character count
 *
 * Return: characters printed
 */
int prints(va_list list, int chars_printed)
{
	char *s = va_arg(list, char *);

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		chars_printed++;
	}
	return (chars_printed);
}
