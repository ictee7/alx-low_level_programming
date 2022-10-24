#include "main.h"

/**
 *puts2 - Function that prints characters and skips some
 *@str: Parameter passed
 *Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
