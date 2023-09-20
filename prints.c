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
	int len, i = 0;

	len = _strlen(s) - 1;

	if (*s == '\0')
		return (-1);

	while (i < len)
	{
		_putchar(s[i]);
		i++;
		chars_printed++;
	}
	return (chars_printed);
}
