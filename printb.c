#include "main.h"

/**
 * printb - converts unsigned int to binary
 * @list: variadic list
 * @chars_printed: character count
 *
 * Return: characters printed
 */
int printb(va_list list, int chars_printed)
{
	unsigned int number = va_arg(list, unsigned int);
	int i = 0;
	int j;
	int binary[64];

	if (number == 0)
	{
		chars_printed++;
		_putchar('0');
		return (chars_printed);
	}

	while (number > 0)
	{
		binary[i] = number % 2;
		number /= 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(binary[j] + '0');

	return (chars_printed);
}
