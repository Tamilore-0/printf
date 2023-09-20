#include "main.h"

/**
 * print_flags - Calculates flags
 * @format: Format string to print
 * @i: takes a parameter.
 * Return: Flags:
 */
int print_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int j, fpws;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (fpws = *i + 1; format[fpws] != '\0'; fpws++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[fpws] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}

		if (FLAGS_CH[j] == 0)
			break;
	}

	*i = fpws - 1;

	return (flags);
}
