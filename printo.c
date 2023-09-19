#include "main.h"
#include <limits.h>

/**
 * printo - converts decimal to octal
 * @list: variadic list
 * @chars_printed: character count
 *
 * Return: characters printed
 */
int printo(va_list list, int chars_printed)
{
	unsigned int num = va_arg(list, unsigned int);
	char octadecimal[100];
	int i, j;


	for (i = 0; num != 0; i++)
	{
		octadecimal[i] = num % 8;
		num /= 8;
		chars_printed++;
	}

	if (i == 0)
	{
		chars_printed++;
		_putchar('0');
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
			_putchar(octadecimal[j] + '0');
	}

	return (chars_printed);
}
