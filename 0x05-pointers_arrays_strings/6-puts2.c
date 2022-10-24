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
		if (str[i] % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
