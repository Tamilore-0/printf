#include "main.h"

/**
 * printd - prints integer to standard output
 * @list: variadic list
 * @chars_printed: character count
 *
 * Return: characters printed
 */
int printd(va_list list, int chars_printed)
{
	int num = va_arg(list, int);
	int digits[10];
	int count = 0;
	int j;
	int is_neg = 0;

	if (num < 0)
	{
		is_neg = 1;
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
		chars_printed++;
	}

	else
	{
		while (num > 0)
		{
			digits[count++] = num % 10;
			num /= 10;
		}

		if (is_neg)
		{
			_putchar('-');
		}

		for (j = count - 1; j >= 0; j--)
		{
			_putchar(digits[j] + '0');
			chars_printed++;
		}
	}
	return (chars_printed);
}
