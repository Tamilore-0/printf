#include "main.h"

/**
 * printx - converts decimal to Lowercase hexadecimal
 * @list: stores variadic argument
 * @chars_printed: character count
 *
 * Return: characters printed
 */

int printx(va_list list, int chars_printed)
{
	unsigned int num = va_arg(list, unsigned int);
	char hexadecimal[100];
	int i = 0;
	int j;
	int temp;

	while (num != 0)
	{

		temp = num % 16;

		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 87;

		hexadecimal[i++] = temp;

		num /= 16;
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
			_putchar(hexadecimal[j]);
	}

	return (chars_printed);
}
