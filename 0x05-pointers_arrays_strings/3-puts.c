#include "main.h"

/**
 *_puts - Function that prints a string
 *@str: Parameter passed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(str[i]);
}
