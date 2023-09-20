#include "main.h"

/**
 * print_flags - Calculates flags
 * @format: Formats string to print arguments
 * @i: takes a parameter.
 * Return: Flags:
 */
int print_flags(const char *format, int *i)
{
	/* + # ' ' */
	/* 2 4 8   */
	int j, fpws;
	int flags = 0;
	const char FLAGS_CHR[] = {'+', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_PLUS, F_HASH, F_SPACE, 0};

	for (fpws = *i + 1; format[fpws] != '\0'; fpws++)
	{
		for (j = 0; FLAGS_CHR[j] != '\0'; j++)
			if (format[fpws] == FLAGS_CHR[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}

		if (FLAGS_CHR[j] == 0)
			break;
	}

	*i = fpws - 1;

	return (flags);
}
