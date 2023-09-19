#include "main.h"

/**
 * specifier_selection - switch case to select the specifier
 * @format: keyword character for switch
 * @list: variadic list
 * @chars_printed: character count
 *
 * Return: characters printed
 */
int specifier_selection(const char *format, va_list list, int chars_printed)
{
	switch (*format)
	{
		case 'c':
			chars_printed = printc(list, chars_printed);
			break;
		case 's':
			chars_printed = prints(list, chars_printed);
			break;
		case 'r':
			chars_printed = printr(list, chars_printed);
			break;
		case '%':
			chars_printed += _putchar('%');
			break;
		case 'i':
		case 'd':
			chars_printed = printd(list, chars_printed);
			break;
		case 'u':
			chars_printed = printu(list, chars_printed);
			break;
		case 'x':
			chars_printed = printx(list, chars_printed);
			break;
		case 'X':
			chars_printed = printX(list, chars_printed);
			break;
		case 'o':
			chars_printed = printo(list, chars_printed);
			break;
		case 'b':
			chars_printed = printb(list, chars_printed);
			break;
		default:
			_putchar('%');
			_putchar(*format);
			chars_printed += 2;
			break;
	}
	return (chars_printed);
}
