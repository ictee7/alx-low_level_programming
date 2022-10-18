/**
 *print_sign - Entry Point
 *@n: Parameter to pass
 *Return: 0 or 1
 */
#include "main.h"
#include <stdlib.h>

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

