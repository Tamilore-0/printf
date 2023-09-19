#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes character to standard output
 * @c: character to be written
 * Return: 0 - success
 */
int _putchar(char c)
{
	write(1, &c, 1);

	return (0);
}
