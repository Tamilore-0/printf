#include "main.h"

/**
 * printu - pints unsigned integer to standard output
 * @list: variadic list
 * @chars_printed: character count
 *
 * Return: characters printed
 */
int printu(va_list list, int chars_printed)
{
	unsigned int num = va_arg(list, unsigned int);
	int integer[10];
	int count = 0;
	int j;

	if (num == 0)
	{
		_putchar('0');
		chars_printed++;
	}
	else
	{
		while (num > 0)
		{
			integer[count++] = num % 10;
			num /= 10;
		}

		for (j = count - 1; j >= 0; j--)
		{
			_putchar(integer[j] + '0');
			chars_printed++;
		}
	}
	return (chars_printed);
}
