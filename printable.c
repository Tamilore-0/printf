#include "main.h"

/**
 * print_printable - Evaluates if a char is printable
 * @j: Char to be evaluated.
 *
 * Return: 1 if j is printable, 0 otherwise
 */
int print_printable(char j)
{
	if (j >= 32 && j < 127)
		return (1);

	return (0);
}
