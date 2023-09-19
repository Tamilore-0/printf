#include "main.h"

/**
 * printR - encodes string to ROT13
 * @list: variadic list
 * @chars_printed: character count
 *
 * Return: characters printed
 */
int printR(va_list list, int chars_printed)
{
	char *s = va_arg(list, char *);
	char c;

	if (*s == '\0')
		return (-1);

	while (*s != '\0')
	{
		c = *s;

		if ((c >= 65 && c < 78) || (c >= 97 &&  c < 110))
			_putchar(c + 13);
		else if ((c >= 78 && c <= 90) || (c >= 110 && c <= 122))
			_putchar(c - 13);
		else
			_putchar(c);

		chars_printed++;
		s++;
	}

	return (chars_printed);
}
