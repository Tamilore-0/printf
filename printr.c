#include "main.h"

/**
 * _strlen - calaculates length of a string
 * @str: string input
 *
 * Return: length of str
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != 0)
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * printr - prints string in reverse
 * @list: variadic list
 * @chars_printed: character count
 *
 * Return: characters printed
 */
int printr(va_list list, int chars_printed)
{
	char *string = va_arg(list, char *);
	int i;
	int length = 0;

	length = _strlen(string) - 1;
	for (i = length; i >= 0 ; i--)
	{
		_putchar(string[i]);
		chars_printed++;
	}

	return (chars_printed);
}

