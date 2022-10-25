#include "main.h"

/**
 *puts_half - Function that prints half of a string
 *@str: Parameter passed
 *Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int j;
	int len = 0;
	int halfLen = 0;

	while (str[i] != 0)
	{
		i++;
	}

	len = i - 1;

	if (len % 2 != 0)
	{
		halfLen = (len - 1) / 2;

		for (j = halfLen; j < len; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');

	}

	else
	{
		halfLen = len / 2;
		for (j = halfLen; j < len; j++)
			_putchar(str[j]);
		_putchar('\n');
	}
}
